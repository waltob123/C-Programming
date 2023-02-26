#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * 
 * Perform modulo between numbers
 * 
 * Return: 0 (Success)
*/

int main(void)
{
    int a = 10;
    double b = 20.0;
    int c = 5;
    int mod;

    mod = a % c;

    printf("The mod of a and c is: %d\n", mod);
    
    return (0);
}