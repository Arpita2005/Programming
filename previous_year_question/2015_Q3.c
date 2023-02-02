//WAP to check wheather a number is prime or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,flag=1;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0&&num!=2)
    {
        printf("It is not a prime number\n");
    }
    else
    {
        printf("It is a prime number\n");
    }
    getch();
    return 0;
}