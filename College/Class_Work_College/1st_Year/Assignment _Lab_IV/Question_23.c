//Write a program in C to replace the spaces of a string with a specific character.
#include<stdio.h>
#include<conio.h>
int main()
{
    char line[200],ch;
    int i;
    printf("Please enter your input:\n");
    gets(line);
    printf("Enter the character with whome you wannt to replace:\n");
    scanf("%c",&ch);
    printf("\n");
    for(i=0;line[i]!='\0';i++)
    {
        if(line[i]==' ')
        {
            line[i]=ch;
        }
    }
    puts(line);
    getch();
    return 0;

}