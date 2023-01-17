//Write a program in C to check whether an input string is palindrome or not.
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char input[200];
    int i;
    printf("Enter your string:\n");
    gets(input);
       if(input==strrev(input))
          {
             printf("It is a palindrome string\n");
          }
     else
          {
             printf("It is not a pallindrome string\n");
          }   
   
   getch();
    return 0;
}