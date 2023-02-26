#include <stdio.h>

/**
 * main - Entry point
 * 
 * Gets input from user using getchar and prints it
 * using printf
 * 
 * Return: 0 (Success)
*/

int main(void)
{
    char user_input;

    /* using getchar to get input fromthe user */
    printf("Type a character: ");
    user_input = getchar();
    printf("You typed: %c\n", user_input);

    return (0);
}