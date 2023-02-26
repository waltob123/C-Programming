# Input / Output

Command line programs uses the standard input and output to take input from the user and display results to the user.

The C programming language has libraries that handles reading input and display output.
#
## getchar() - Reading input
The getchar() command is used to read input from the command line. It returns value is EOF (when the file ends or an error is encountered). With this function it requires only one character even if you type more than one character it returns the first one.
#
## putchar() - Writing output
The putchar() command writes to the standard output. It takes a character or an int as an argument converts it to unsigned and returns the value. Note that this function uses single quotation marks instead of double quotations.
#
# Formated Output
This is when we format text and display the output to the stdout (standard output).
#
## printf()
This is the command we use to display formatted output to the standard output. This function uses double quotation marks.
### Syntax
```{c}
printf(format_str, arg1, arg2, ...);
```
Where the format_str is a string value followed by arguments. Normally the arguments are variables that are going to be substituted into the format_str.
The format_str is how you want to display those arguments.
Example:
```{c}
printf("Name: %s Age: %d Mark: %.2f", "Desmond", 23, 90.5);
```
#
# Formatted Input
## scanf()
This command in the stdio library reads formatted input from the standard input.
### Syntax
```{c}
scanf(format_str, &arg1, &arg2, ...);
```
Arguments are the address of variables that will store the read values.
format_str shows how the input is formatted.
##### Example:
```{c}
/* Data read from standard input: 'b', 200 */
char name;
int num;
scanf("%s,%d", &name, &num);
```
