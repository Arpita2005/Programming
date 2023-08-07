//WAP to print the initial of names 
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char name[100];
    int len;
    printf("Enter The Name :\n");
    gets(name);
    len=strlen(name);
    printf("%c",name[0]);
    for(int i=0;i<len;i++)
    {
        if(name[i]==' ')
        {
            printf("%c",name[i+1]);
        }
    }
    getch();
    return 0;
}