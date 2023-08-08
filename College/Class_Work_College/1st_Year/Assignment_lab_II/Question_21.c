#include<stdio.h>
#include<conio.h>
int main()
{
   
    int row,coloumn,i,j,first[50][50],second[50][50],multiplication[50][50];
    printf("Enter the number of row:\n");
    scanf("%d",&row);
    printf("Enter the number of coloumn:\n");
    scanf("%d",&coloumn);
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        scanf("%d",&first[i][j]);
    }
     printf("Enter the elements of second matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        scanf("%d",&second[i][j]);
    }
    printf("Multiplication of the total matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        {
            multiplication[i][j]=first[i][j]*second[i][j];
            printf("%d\n",multiplication[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
