// Write a program in C to Concatenate Two Strings Manually, without library function.
#include<stdio.h>
#include<conio.h>
int main()
{
    char first[200],second[200],third[200];
    int i,j,k;
    printf("Enter the first line:\n");
    gets(first);
    for(int i=0;first[i]!='\0';i++)
    {
       third[k]=first[i];
       k++;
    }
    printf("Enter the second line:\n");
    gets(second);
    for(int j=0;second[j]!='\0';j++)
    {
       third[k]=second[j];
       k++;
    }
    third[k]='\0';
    printf("The final string is:\n%s",third);
    getch();
    return 0;
}