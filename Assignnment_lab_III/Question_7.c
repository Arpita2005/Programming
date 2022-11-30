#include<stdio.h>
#include<conio.h>
void prime_function();
int main()
{
    prime_function();
    getch();
    return 0;
}
void prime_function()
{
    int number,a,flag=1;
    printf("Enter your number:\n");
    scanf("%d",&number);
    for(a=2;a<number;a++)
    {
        if(number%a==0)
        {
            flag =0;
            break;
        }
    }
    if(flag==0&&number!=2)
    {
        printf("It is not a prime number\n");
    }
    else
    {
        printf("It is  a prime number\n");
    }
}