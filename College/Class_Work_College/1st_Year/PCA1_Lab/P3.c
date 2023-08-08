//WAP to swap two numbers using bitwise operators
#include<stdio.h>
#include<conio.h>
int main()
{
    int num_1,num_2;
    printf("Enter the value of first number:\n");
    scanf("%d",&num_1);
    printf("Enter the value of second number:\n");
    scanf("%d",&num_2);
    printf("Before swapping:\n");
    printf("========================\n");
    printf("First number=%d\nSecond number=%d\n",num_1,num_2);
    num_1^num_2;
    num_2^num_1;
    printf("\n\n");
    printf("After swapping the value will be:\n");
    printf("=============================\n");
    printf("First number:%d\nSecond number=%d\n",num_2,num_1);
    getch();
    return 0;
}