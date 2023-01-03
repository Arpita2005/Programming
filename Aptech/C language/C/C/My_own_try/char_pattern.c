#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char name[100];
    int scr=0;
    printf("Please Enter your name:\n");
    gets(name);
    scr=strlen(name);
    for(int k=scr-1;k>=0;k--)
    {
        for(int l=0;l<=k;l++)
        {
            printf("%c",name[l]);
        }
        printf("\n");
    }
    for(int i=1;i<scr;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",name[j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}