# Type Casting

Type casting is when we convert one data type to another data type.

To do the conversion we put the data type we want to convert into inside parenthesis () and leave a space then we type what we want to convert.

For instance converting an int to a float.

(float) 5.

## Example 
#
```{c}
#include <stdio.h>

int main(void)
{
    int i = 10; /* Declare and assign i to 10 */

    float f; /* Declare f as type float */

    f = (float) i; /* Convert i to float and assign it to f */

    printf("%.2f", f);
    return (0);
}
```

NB: If you convert a character into an integer you get the equivalent ASCII number of that character and vice versa.