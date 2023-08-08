// *    *
// **  **
// ******
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,j,k;
    printf("Enter the number of rows:\n");
    scanf("%d",&num);
    printf("\n+===========+\n");
    for(i=0;i<num;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(i=num;i>=1;i--)
   {
    for(j=1;j<i;j++)
    {
        printf(" ");
    }
    for(k=num;k>=i;k--)
    {
        printf("*");
    }
    printf("\n");
  }
    getch();
    return 0;

}