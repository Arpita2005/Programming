//Write a program in C to copy one string to another string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char sen[400],sen1[400],ptr;
    printf("Enter first Sentence:\n");
    gets(sen);
    printf("Enter second Sentence where the first string gonna copy:\n");
    gets(sen1);
    printf("\n");
    printf("The Copied part is:\n");
    printf("====================================\n");
    strcpy(sen,sen1);
    printf("%s",sen);
    getch();
    return 0;
}