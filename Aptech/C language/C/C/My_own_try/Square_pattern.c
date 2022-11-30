#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,l;
    printf("The number of rows are:\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(l=1;l<=N;l++)
        {
            printf(" *");
        }
        printf("\n");
    }
    getch();
    return 0;
}