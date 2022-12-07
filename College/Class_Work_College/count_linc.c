#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char paragraph[100];
    int i,count=0;
    printf("The Paragraph is:\n");
    scanf("%[^\nc]",paragraph);
    for(i=0;i<='\0';i++)
    {
        if(paragraph[i]=='.'&&paragraph[i+1]=='.')
        {
            count++;
        }
    }
    printf("The numbers of line in the paragraphs:\n%d",i);
    getch();
    return 0;
}