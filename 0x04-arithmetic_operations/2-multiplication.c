#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * 
 * Perform multiplication between numbers
 * 
 * Return: 0 (Success)
*/

int main(void)
{
    int a = 10;
    double b = 20.0;
    int c = 5;
    int mult;

    mult = a * c;

    printf("The multiplication of a and c is: %d\n", mult);
    return (0);
}