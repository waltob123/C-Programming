#include <stdio.h>

/**
 * main - Entry point
 * 
 * Prints H to standard output using putchar an
 * prints a new line after
 * Return: 0 (Success)
*/

int main(void)
{
    char user_input;

    user_input = 'H';

    /* using putchar to print to standard output */
    putchar(user_input);
    putchar('\n');
    return (0);
}