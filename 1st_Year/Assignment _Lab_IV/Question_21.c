//Write a program in C to convert a string to uppercase.
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char line[300];
    printf("Enter your input:\n");
    gets(line);
    printf("The uppercase version is:\n%s",strupr(line));
    getch();
    return 0;
}