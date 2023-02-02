//Calculate Factorial
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,fact=1;
    printf("Enter the num:\n");
    scanf("%d",&num);
    for(int i=num;i>0;i--)
    {
        fact=fact*i;
    }
    printf("\n*************************\n");
    printf("The factroial of %d is:%d",num,fact);
    getch();
    return 0;
}