//Write a program in C to print individual characters of string in reverse order.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char input[500];
    int i;
    printf("Enter the String:\n");
    gets(input);
    printf("The letters that are include in the string in reverse are:\n");
    printf("=====================================================\n");
    printf("%s",strrev(input));
    getch();
    return 0;
}