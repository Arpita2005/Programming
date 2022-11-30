// Passing Strings to Functions
#include <stdio.h>

// void is use to make a user defined function in C
// displayString() is the name of the function
void displayString(char str[]); // char is variable type and str[] is to store the string
                                // void not retun anything it can diplay something but it will return anything
int main()
{
    char x[50]; // char str[] will store 50 values
    printf("Enter string: ");
    gets(x); // x is a variable which will store the string value from user input
    // passing the user input to the displayString from x variable to print it another function or program
    displayString(x); // Passing string -  str  to function.
    return 0;
}

void displayString(char str[])
{
    printf("String Output:   ");
    puts(str); // puts() is a function to print the string
}
