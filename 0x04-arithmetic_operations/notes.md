# Arithmetic Operations in C
In C programming language there are various arithmetic operations you can perform. 
#
#### The following are the arithmetic operations you can do in C.
1. Addition (Operator: +) - Add numbers
2. Subtraction (Operator: -) - Subtract numbers
3. Division (Operator: /) - Divide numbers
4. Multiplication (Operator *) - Multiply numbers
5. Modulo (Operator %) - Modulo of numbers

### Examples
```{c}
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 10;
    int b = 20
    int sum;
    int diff;
    int mult;
    int div;
    int mod;

    /* Addition */
    sum = a + b;
    printf("The sum of a and b is: %d\n", sum);

    /* Subtraction */
    diff = b - a;
    printf("The difference between a and b is: %d\n", diff);

    /* Multiplication */
    mult = a * b;
    printf("The product of a and b is: %d\n", mult);

    /* Division */
    div = a / b;
    printf("The division of a and b is: %.2f\n", div);

    /* Modulo */
    mod = b % a;
    printf("The modulo of b and a is: %d\n", mod);
}
```
#
NB: Any operation you do on a floating point number will result in a floating point number. Also, if you
divide two integers the result will be an integer.

For instance if you add an integer 5 to a floating point number 4.0, the result will be 9.0