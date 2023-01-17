//Write a program in C to count the number of punctuation characters exists in a string.
#include<stdio.h>
#include<conio.h>
int main()
{
    char sen[100];
    int i,count=0;
    printf("Enter the String:\n");
    gets(sen);
    for(i=0;sen[i]!='\0';i++)
    {
        if(sen[i]==';'||sen[i]=='!'||sen[i]=='.'||sen[i]=='?'||sen[i]==',')
        {
            count++;
        }
    }
    printf("\n");
    printf("...........................\n");
    printf("The number of punctuation characters : \n%d",count);
    getch();
    return 0;
}