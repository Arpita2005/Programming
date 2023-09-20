#include<stdio.h>
#include<conio.h>
int main()
{
    int row,coloumn,i,j,first[100][100],second[100][100],sum[100][100];
    printf("Number of rows:\n");
    scanf("%d",&row);
    printf("Number of columns:\n");
    scanf("%d",&column);

    printf("Enter the elements of first matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        {
            printf("Elements in [%d][%d] is :",i,j);
            scanf("%d",&first[i][j]);
        }
    }

     printf("Enter the elements of second matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        {
             printf("Elements in [%d][%d] is :",i,j);
             scanf("%d",&second[i][j]);
        }
    }

    printf("Sum of the total matrix:\n"); 
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        {
            sum[i][j]=first[i][j]+second[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    getch();
}
