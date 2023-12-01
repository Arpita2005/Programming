//remove punctuation from a string
#include<stdio.h>
#include<conio.h>
int main()
{
    char inp[500];
    printf("Enter the character array :\n");
    gets(inp);
    printf("\n");
    for(int i=0;inp[i]!='\0';i++)
    {
    if(inp[i]=='.'||inp[i]=='?'||inp[i]=='#'||inp[i]=='@'||inp[i]==','||inp[i]=='!' ||inp[i]=='&')
    {
       continue;// it means skipping the conditions that are given in the if statement
    }
    printf("%c",inp[i]);
    }
    getch();
    return 0;
}
