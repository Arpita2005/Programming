//GCD of two numbers
#include<stdio.h>
#include<conio.h>
int gcd(int num1,int num2)
{
    if(num2!=0)
    {
        return gcd(num2,num1%num2);
    }
    else
    {
        return num1;
    }
}
int main()
{
    int num1,num2;
    printf("Enter the first num:\n");
    scanf("%d",&num1);
    printf("Enter the second num:\n");
    scanf("%d",&num2);
    printf(:\n-======================-\n);
    printf("The gcd of two numbers are: %d",gcd(num1,num2));
    getch();
    return 0;
}