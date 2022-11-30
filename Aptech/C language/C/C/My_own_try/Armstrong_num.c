#include<stdio.h>
#include<conio.h>
int main()
{
    int num,digit;
    int sum=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    /*
    while(n>0)
    {
        digit=num%10;
        sum=sum+(digit*digit*digit)
        num=num/10
    }*/
    if(num==sum)
    {
        printf("It is a armstrong number\n");
    }
    else
    {
        printf("It is not a armstrong number\n");
    }
    getche();
    return 0;
}