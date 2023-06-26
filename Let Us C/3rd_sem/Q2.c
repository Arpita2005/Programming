// Name Printing

#include<stdio.h>
#include<conio.h>
inr main()
{
    char name[30];
    printf("Enter your name :\n");
    fflush(stdin);
    gets(name);
    printf("Your name is :%c",name);

    getch();
    return 0;
}