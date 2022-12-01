#include<stdio.h>
#include<conio.h>
int main()
{
    int num,count=0,rem;
    int r,odd_sum=0,even_sum=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    //to check the last digit
    r=num%10;
    printf("The last digit of %d is:%d\n",num,r);
    if(r%5==0)
    {
        printf("It is divisible by 5\n");
    }
    else
    {
         printf("It is not divisible by 5\n");
    }
    while(num>0)
    {
        if((num%10)%2==0)
        {
            even_sum+=num%10;
        }
        else
        {
            odd_sum+=num%10;
        }
        num/=10;
    }
    if(even_sum-odd_sum>=0||even_sum-odd_sum<=0)
    {
        printf("It is divisible by 11\n");
    }
    else
    {
        printf("It is not divisible by 11\n");
    }
    getch();
    return 0;
}