//Take a sentence as input. Find how many capitalised words are there (words starting with capital letters).
#include<stdio.h>
#include<conio.h>
int main()
{
    char sentence[200];
    int capital;
    printf("Enter the sentence:\n");
    gets(sentence);
    for(int i=0;sentence[i]!=' ';i++)
    {
        if(sentence[i]>='A'&&sentence[i]<='Z')
        {
        capital++;
        }
    }
    printf("The number of capital words are:%d\n",capital);
    getch();
    return 0;
}