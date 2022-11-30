#include<stdio.h>
#include<conio.h>
int main()
{
    int i,k,row;
    char ch='*',sp=' ';
    printf("Enter the no of rows:\n");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(k=1;k<=row-i;k++)
        printf("%c ",sp);
        for(k=1;k<=2*i-1;k++)
        printf("%c ",ch);
        printf("\n");
    }
    getch();
    return 0;
}