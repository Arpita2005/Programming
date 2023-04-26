#include<stdio.h>
#include<conio.h>
int main()
{
    int row,coloumn,i,j,a[row][coloumn];
    printf("Enter the number of rows :\n");
    scanf("%d",&row);
    printf("Enter the number of coloumn :\n");
    scanf("%d",&coloumn);
    printf("Enter the elements of matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        {
            printf("Element number :a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    getch();
    return 0;
}