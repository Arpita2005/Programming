//swapping two numbers 
#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y);
int main()
{
    int first,second;
    printf("Enter the first number:\n");
    scanf("%d",&first);
    printf("Enter the second number:\n");
    scanf("%d",&second);
    printf("Before swapping the numbers are:\n%d  %d ",first,second);
    swap(&first,&second);
    printf("\nAfter swapping the numbers are:\n");
    printf("%d    %d",first,second);
    getch();
    return 0;
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
