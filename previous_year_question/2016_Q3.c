/*1
  10
  101
  1010*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int row,i,j;
    printf("Enter the number of rows:\n");
    scanf("%d",&row);
    printf("The pattern is:\n");
    for(i=0;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
    printf("\nPress enter to exit !");
    getch();
    return 0;
}