//Multiply two matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int first[50][50],second[50][50],i,j,row,coloumn,multiplication[50][50];
    printf("Enter the number of coloumn:\n");
    scanf("%d",&row);
    printf("Enter the number of row:\n");
    scanf("%d",&coloumn);
    printf("Enter the elements of first matrix:\n");
    printf("+=====================+\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        {
            printf("Element number %d-%d : ",i+1,j+1);
            scanf("%d",&first[i][j]);
        }
    }
    printf("\n\n");
    printf("Enter the elements of second matrix:\n");
    printf("+=====================+\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        {
            printf("Element number %d-%d : ",i+1,j+1);
            scanf("%d",&second[i][j]);
        }
    }
    printf("\n\n");
    printf("The Multiplication Result is:\n");
    printf("+=====================+\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        {
         multiplication[i][j]=first[i][j]*second[i][j];
            printf("%d",multiplication[i][j]);
        }
        prinntf("\n\n");
    }
    getch();
    return 0;

}