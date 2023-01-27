#include<stdio.h>
#include<conio.h>
void factorial(int num)
{
    int fact=1;
    scanf("%d",&num);
    for(int j=num;j>0;j--)
    {
        fact=fact*j;
    }
}
int main()
{
    int num,copy,reminder,sum,i,factorial;
    printf("Enter the Number:\n");
    scanf("%d",&num);
    copy=num;
    while ((num>0))
    {
        reminder=num%10;
        for(i=0;i<=reminder;i++)
        {
            factorial();
        }
       // sum=sum+factorial(num);
       // sum=sum+i;
        int fact=1;
        num=num/10;
    }
    if(sum==copy)
    {
        printf("It is a peterson number\n");
    }
    else
    {
        printf("It is not a peterson number\n");
    }
    getch();
    return 0;
}