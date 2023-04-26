// Program to Multiply Two Matrices
#include <stdio.h>
#include<conio.h>
int main()
{
    int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k;

    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and column for second matrix: ");
    scanf("%d %d",&r2, &c2);
    // Column of first matrix should be equal to column of second matrix and
    while (c1 != r2)
    {
        printf("Error! column of first matrix not equal to row of second.\n\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d",&r2, &c2);
    }

    // Storing elements of first matrix.
    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j)
        {
            printf("Enter elements a[%d][%d]: ",i, j);
            scanf("%d", &a[i][j]);
        }

    // Storing elements of second matrix.
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("Enter elements b[%d][%d]: ",i, j);
            scanf("%d",&b[i][j]);
        }
    printf("\nMatrix 1:\n");
    for(i=0; i<r1; ++i)
    {   
	    for(j=0; j<c1; ++j)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }    
    printf("\nMatrix 2:\n");
    for(i=0; i<r2; ++i)
    {   
	    for(j=0; j<c2; ++j)
        {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }    
    // Initializing all elements of result matrix to 0
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
        {
            result[i][j] = 0;
        }

    // Multiplying matrices a and b and
    // storing result in result matrix
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<c1; ++k)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }

    // Displaying the result
    printf("\nOutput Matrix:\n");
    for(i=0; i<r1; ++i)
    {
    	for(j=0; j<c2; ++j)
        {
            printf("%3d", result[i][j]);
               
        }
	    printf("\n");
	}   
    getch();
    return 0;
}
