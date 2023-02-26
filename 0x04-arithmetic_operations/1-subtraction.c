#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * 
 * Perform difference between numbers
 * 
 * Return: 0 (Success)
*/

int main(void)
{
    int a = 10;
    double b = 20.0;
    int c = 5;
    int diff;

    diff = a - c;

    printf("The difference of a and c is: %d\n", diff);
    
    return (0);
}