// WAP to swap two nums of n length
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,temp;
    printf("Enter The First Number :\n");
    scanf("%d",&num1);
    printf("Enter The Second Number :\n");
    scanf("%d",&num2);
    printf("\nBefore swapping the numbers are : %d , %d ",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After swapping the numbers are : %d , %d \n",num1,num2);
    getch();
    return 0;

}