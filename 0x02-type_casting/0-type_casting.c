#include <stdio.h>

/**
 * main - Entry point
 * 
 * Converts an int to a float an vice versa
 * 
 * Return: 0 (Success)
*/

int main(void) {
    /* Declare and set i to 10 */
    int i = 10;

    /* Declare and set f to 3.14 */
    float f = 3.14;

    /* Declare i_convert and f_convert */
    float f_convert;
    int i_convert;

    /* Assign f_convert to i and i_convert to f */
    f_convert = (float) i;
    i_convert = (int) f;

    /* print results to stdout */
    printf("Integer converted: %.2f\n", f_convert);
    printf("Float converted: %d\n", i_convert);

    return (0);
}