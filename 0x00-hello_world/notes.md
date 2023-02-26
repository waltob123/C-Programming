# The Hello World Program
This program outputs 'Hello World' to the standard output.

## Breakdown of program
#
The program starts by including the standard input output header file. Inside this header file are functions or methods we can use to output things to the standard output or take input from the user.

Nex we have our comments or documentation describing the main function and also the return value of our program.

From there we define our main function with a return type of int (Meaning our function will return an integer) and also we specify our function will not be taking any parameters by passing in void as the parameter.

Now, inside our main function we use the 'printf' function from the stdio.h (standard input output header file) to output 'Hello World' followed by a new line ('\n') to the screen.
We then return (0) meaning the execution of the main function was a success.

NB: Whenever we compile our program, the compiler looks for the main function and runs it. What this means is if we want to do anything, we should do it inside the main function because when it's done outside the main function the program will crash.

Also take note that all statements in the C program ends with a semi-colon (;). Failure to this and your program will crash.