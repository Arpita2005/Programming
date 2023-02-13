#include<stdio.h>
#include<conio.h>
void transpose();
int main()
{
    transpose();
    getch();
    return 0;
}
void transpose()
{
    int row,coloumn,i,j;
    int array[100][100],transpose[100][100];
    printf("Enter the number of rows:\n");
    scanf("%d",&row);
    printf("Enter the number of coloumn:\n");
    scanf("%d",&coloumn);

    printf("Enter matrix elements:\n");
    for(i=0;i<row;i++)
        for(j=0;j<coloumn;j++){
            printf("Enter elements a%d%d\n",i+1,j+1);
            // fflush(stdin);
            scanf("%d",&array[i][j]);
        }

    printf("Enetred matrix\n");
    for(i=0;i<row;i++)
        for(j=0;j<coloumn;j++)
        {
            printf("%3d",array[i][j]);
            // if(j==coloumn-1)
            // printf("\n");
        }

    for(i=0;i<row;i++)
        for(j=0;j<coloumn;j++)
            transpose[j][i]=array[i][j];


    printf("\nTranpose of a matrix\n");
    printf("=================\n");
    for(i=0;i<coloumn;i++)
        for(j=0;j<row;j++)
        {
            printf("%3d",transpose[i][j]);
            if(j==row-1)
            printf("\n");
        }
}