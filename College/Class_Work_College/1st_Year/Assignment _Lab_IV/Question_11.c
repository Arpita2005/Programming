//Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char line[100],ch;
    int i,j,length;
    printf("Give the input of a string:\n");
    gets(line);
    printf("\n");
    printf("=================================\n");
    length=strlen(line);
    for(i=0;i<length;i++)
    {
        for(j=0;j<length-1;j++)
        {
            if(line[j]>line[j+1])
            {
                ch=line[j];
                line[j]=line[j+1];
                line[j+1]=ch;
            }
        }
    }
    printf("The Sentence after arranging in ascending order:\n%s",line);
    getch();
    return 0;
}