#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * 
 * Perform division between numbers
 * 
 * Return: 0 (Success)
*/

int main(void)
{
    int a = 10;
    double b = 20.0;
    int c = 5;
    int div;
    double float_div;

    div = a / c;
    float_div = a / b;

    printf("The division of a and c is: %d\n", div);
    printf("The division of a and b is: %f\n", float_div);
    
    return (0);
}