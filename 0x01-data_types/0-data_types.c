#include <stdio.h>

/**
 * main - Entry point
 * 
 * Prints size of intrinsic data types
 * 
 * Return: 0 (Success)
*/

int main(void) {
    printf("Size of char: %ld Byte(s).\n", sizeof(char));
    printf("Size of int: %ld Byte(s).\n", sizeof(int));
    printf("Size of short: %ld Byte(s).\n", sizeof(short));
    printf("Size of long: %ld Byte(s).\n", sizeof(long));
    printf("Size of double: %ld Byte(s).\n", sizeof(double));
    printf("Size of float: %ld Byte(s).\n", sizeof(float));

    return (0);
}