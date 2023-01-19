//Write a program in C to calculate the sum of numbers from 1 to n using recursion.
#include<stdio.h>
#include<conio.h>
int sum_natural(int num);
int main()
{
    int num,sum=0;
    printf("Enter the last range number:\n");
    scanf("%d",&num);
    printf("The sum is:\n");
    printf("%d",sum_natural(num));
     getch();
    return 0;
}
int sum_natural(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
         return num+sum_natural(num-1);
    }
}