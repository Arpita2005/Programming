//Write a  program in C to read two numbers and produce the sum and product of those numbers and show the results separately 
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers :\n");
    scanf("%d%d",&num1,&num2);
    printf("The Sum of %d and %d is : %d",num1,num2,num1+num2);
    printf("\nThe Product of %d and %d is : %d",num1,num2,num1*num2);
    getch();
    return 0;
}