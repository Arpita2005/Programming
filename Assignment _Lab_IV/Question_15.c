//Write a program in C to read a sentence and replace lowercase characters by uppercase and vice versa
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char sen[400];
    printf("Give your input pleasr:\n");
    gets(sen);
    printf("The uppercase version is \n%s",strupr(sen));
    getch();
    return 0;
}