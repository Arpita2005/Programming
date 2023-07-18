//pallindrome string
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char line[100];
    int i,flag=0,len;
    printf("Please Give Your Input:\n");
    gets(line);
    len=strlen(line);
    for(i=0;line[i]!='\0';i++)
    {
        if(line[i]!=line[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("It is a pallindrome String\n");
    }
    else
    {
        printf("It is not a pallindrome String\n");
    }
getch();
return 0;
}