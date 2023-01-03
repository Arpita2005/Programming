//WAP to print 1+2/2!+3/3!....n
#include<stdio.h>
#include<conio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=x;i>=0;i--)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int last_num,last,k,sum=0,result;
    printf("Enter the last number of range:\n");
    scanf("%d",&last_num);
    k=last_num;
    //last=factorial(k);
    for(int i=1;i<=1000;i++)
    {
        result=i/factorial(i);
        sum+=result;
    }
    printf("The sum is: %d",sum);
    getch();
   return 0;
}