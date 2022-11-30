#include<stdio.h>
#include<conio.h>
int main()
{
    int N,i,l;
    printf("The numbers of row are:\n");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        for(l=1;l<=i;l++)
        {
            printf(" * ");
        }
        printf("\n");
    }getch();
    return 0;
}