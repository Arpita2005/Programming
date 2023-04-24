// C program to read line of text using gets() and puts()
// To make program easier, there are predefined functions gets()
//  and puts in C language
//  to read and display string respectively.
#include <stdio.h>
#include<conio.h>
int main()
{
    char name[30]; // name is a string[] variable name value is 30
    printf("Enter name:  ");
    gets(name); // Function to read string from user.
    printf("HELLO ! %s",name);
    getch();
    return 0;
    
    // puts("HELLO ! ");  //puts() - put string automatically takes new line mean \n
    // Puts() is a function to display the string value
    // getting input from user on name variable
    //puts(name); // Function to display string.
}
