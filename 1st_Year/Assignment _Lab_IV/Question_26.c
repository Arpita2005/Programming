//Write a C proagramme to split the sentence by space into words
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[100];
    char newString[10][10]; 
    int i,j=0,ctr=0;
       printf("\n\n Split string by space into words :\n");
       printf("---------------------------------------\n");    
 
    printf(" Input  a string : ");
    gets(str1);
    for(i=0;i<=(strlen(str1));i++)
    {
        if(str1[i]==' '||str1[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            newString[ctr][j]=str1[i];
            j++;
        }
    }
    printf("\n Strings or words after split by space are :\n");
    for(i=0;i < ctr;i++)
        printf(" %s\n",newString[i]);

        getch();
    return 0;
}