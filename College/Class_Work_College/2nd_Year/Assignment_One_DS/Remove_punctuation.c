#include<stdio.h>
#include<conio.h>
int main()
{
    char inp[50];
    printf("Enter the input :\n");
    gets(inp);
    for(int i=0;inp[i]!='\0';i++)
    {
    if(inp[i]=='.'||inp[i]==','||inp[i]=='!'||inp[i]=='?'||inp[i]=='#'||inp[i]=='@')
    {
       continue;    
    }
    printf("%c",inp[i]);
    }
    getch();
    return 0;
}