//WAP in c to sum the digits of three prime number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,k,sum=0,rem;
    printf("Enter a three digits prime number:\n");
    scanf("%d",&num);
    k=num;
        while(k!=0)
        {
            rem=k%10;
            k=k/10;
            sum=sum+rem;
        }
        printf("The Sum is:%d",sum);
    getch();
    return 0;
}