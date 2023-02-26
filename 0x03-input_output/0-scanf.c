#include <stdio.h>

/**
 * main - Entry point
 * 
 * Reads data from standard input and displays it to stdout.
 * The scanf requires you to type in a character and an integer.
 * Example: A1 or a1
 * 
 * Return: 0 (Success)
*/

int main(void){
    char ch;
    int num;


    /* using scanf to get input from user */
    printf("Enter a char and a num: ");
    scanf("%c%d", &ch, &num);
    printf("You typed: %c%d\n", ch, num);
    return (0);
}