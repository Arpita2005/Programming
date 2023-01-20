//Write a program in C to read a sentence and replace lowercase characters by uppercase and vice versa
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char sen[400],sen1[200];
    printf("Give your input please:\n");
    gets(sen);
    printf("The uppercase version is \n%s\n",strupr(sen));
     printf("Give your input please:\n");
    gets(sen1);
    printf("\nThe lowercase version is \n%s",strlwr(sen1));
    getch();
    return 0;
}