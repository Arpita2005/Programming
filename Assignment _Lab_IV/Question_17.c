//Write a program in C to remove characters in String Except Alphabets.
#include<stdio.h>
#include<conio.h>
int maiin()
{
    char str[100];
    int count=0,i;
    printf("Enter your string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>'A'&&str[i]<'Z')||(str[i]>'a'&&str[i]<'z'))
        {
            count++;
        }
    }
    printf("The string after removing special character and digit is:\n%s",str[i]);
    getch();
    return 0;
}