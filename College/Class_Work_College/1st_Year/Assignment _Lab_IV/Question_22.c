//Write a program in C to convert a string to lowercase.
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char line[300];
    printf("Enter your input:\n");
    gets(line);
    // // char ch=tolower(line);
    // char lin =tolower(line);
    // printf("The lowercase version is:\n%s",lin);
    printf("The lower version is:%s",strlwr(line));
    getch();
    return 0;
}