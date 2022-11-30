//To check wheather a numbr is prime or not using recursion
#include<stdio.h>
#include<conio.h>
void prime_recursion();
int main()
{
    prime_recursion();
    getch();
    return 0;
}
void prime_recursion()
{
    int num,flag,i,sum;
    printf("Enter your number:\n");
    scanf("%d",&i);
    for(num=2;num<i;num++)
    {
        sum=sum+i;
        flag=1;
        break;
    }
    if(sum==flag)
    {
        printf("It is not a prime number\n");
    }
    else
    {
         printf("It is  a prime number\n");
    }

}