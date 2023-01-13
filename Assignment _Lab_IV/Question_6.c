//Write a program in C to compare two strings without using string library functions. (Only check they are equal or not).
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char input[200],input1[200];
    printf("Enter first Sentence:\n");
    gets(input);
    printf("\nThe length is:%d\n",strlen(input));
    printf("Enter second Sentence:\n");
    gets(input1);
    printf("The length is:%d\n",strlen(input1));
    if(strlen(input)==strlen(input1))
    {
        printf("The two strings are equal\n");
    }
    else
    {
        printf("The two strings are not equal\n");
    }
    getch();
    return 0;
}