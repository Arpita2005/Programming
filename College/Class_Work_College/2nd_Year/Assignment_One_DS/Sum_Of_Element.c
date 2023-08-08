//matrix input in 2d array and add all the elements
#include<stdio.h>
#include<conio.h>
int main()
{
    int row,coloumn,i,j,first[50][50],add;
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
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        {
            add=add+first[i][j];
        }
    }
    printf("the sum is %d",add);
    getch();
}
