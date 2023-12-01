#include<stdio.h>
#include<conio.h>
void main()
{
    int row,coloumn,i,j,first[100][100],second[100][100],sum[100][100];

    printf("Number of rows:\n");
        scanf("%d",&row);
    printf("Number of coloumns:\n");
        scanf("%d",&coloumn);

    printf("Enter the elements of first matrix:\n");
    printf("=====================:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        scanf("%d",&first[i][j]);
    }

    printf("Enter the elements of second matrix:\n");
    printf("=====================:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        scanf("%d",&second[i][j]);
    }

    printf("Sum of the total matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        {
            sum[i][j]=first[i][j]+second[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    getch();
}
