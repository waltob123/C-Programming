#include <stdio.h>

/**
 * The char type can also produce a result of type int
 * It should be enclosed in a single quotation mark.
 * 
 * main - Entry point
 * 
 * Return: 0 (Success)
*/

int main(void)
{
    char i;
    
    i = 'A';

    printf("%c\n", i); /* character as result */
    printf("%d\n", i); /* integer as result */
    return (0);
}