//count of words in a string
#include<stdio.h>
#include<conio.h>
int main()
{
    char input[200];
    int num=1;
    printf("Enter a Line:\n");
    gets(input);
    for(int i=0;input[i]!='\0';i++)
    {
        if(input[i]==' ')
        {
            num++;
        }
    }
    printf("The number of words are:\n%d",num);
    getch();
    return 0;
}