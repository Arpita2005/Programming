//Write a program in C to find the length of a string without using library function.
#include"stdio.h"
#include"string.h"
#include"conio.h"
int main()
{
    char sen[200];
    int i;
    printf("Enter a string:\n");
    gets(sen);
    printf("The length is:\n");
    for(i=0;sen[i]!='\0';i++);
    printf("%d",i);
    getch();
    return 0;
}