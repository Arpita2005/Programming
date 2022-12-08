#include<stdio.h>
#include<conio.h>
int main()
{
    char sentence[200];
    int capital=0;
    printf("Enter the sentence:\n");
    gets(sentence);
    for(int i=0;sentence[i]!='\0';i++)
    {
        if(sentence[i]>='A'&& sentence[i]<='Z')
        {
            capital++;
        }
    }
    printf("The number of capital words are:%d\n",capital);
    getch();
    return 0;
}