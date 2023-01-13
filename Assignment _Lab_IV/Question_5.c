#include"stdio.h"
#include"conio.h"
int main()
{
    char input[500];
    int i;
    printf("Enter the Sentence:\n");
    gets(input);
    int num=1;
    for(i=0;input[i]!='\0';i++)
    {
        if(input[i]==' ')
        {
            num++;
        }
    }       
    printf("The number of words are:%d",num);
    getch();
    return 0;
}