//Write a program in C to separate the individual characters from a string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char input[500];
    printf("Enter the String:\n");
    gets(input);
    printf("The letters that are include in the string are:\n");
    printf("=====================================================\n");
    for(int i=0;input[i]!='\0';i++)
    {
        printf("%c\n",input[i]);
    }
    getch();
    return 0;
}