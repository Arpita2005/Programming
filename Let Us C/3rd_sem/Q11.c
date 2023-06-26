// Chech whether a number is positive negative or zero 
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter the number :\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("It is a positive number\n");
    }
    else if(num<0)
    {
        printf("It is a negative number\n");
    }
    else if(num==0)
    {
        printf("It is a zero \n");5
    }

    getch();
    return 0;
}