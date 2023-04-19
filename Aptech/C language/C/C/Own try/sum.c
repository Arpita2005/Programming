#include<stdio.h>
#include "mySum.h"
#include<conio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("Enter the first number :\n");
    scanf("%d",&num1);
    printf("Enter the second number :\n");
    scanf("%d",&num2);

    sum=sum_of_numbers(num1,num2);
    avg=avg_of_numbers(num1,num2);

    printf("Sum  is :%d amd Average is :%.2f",sum,avg);

    getch();
    return 0;
}