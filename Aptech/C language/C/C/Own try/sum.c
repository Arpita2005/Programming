#include<stdio.h>
#include"Arpita.h"
#include<conio.h>
int main()
{
    int num1,num2,sum,k;
    float avg;
    printf("Enter the first number :\n");
    scanf("%d",&num1);
    printf("Enter the second number :\n");
    scanf("%d",&num2);

    sum=sum_of_numbers(num1,num2);
    avg=avg_of_numbers(num1,num2);
    printf("\nSum  is :%d amd Average is :%.2f",sum,avg);

    printf("Sample of a incremented loop\n");
    incre_loop();
    getch();
    return 0;
}