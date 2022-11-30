#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your First Number : \n");
    scanf("%d",&a);
    printf("Enter your secound numer : \n");
    scanf("%d",&b);
    if (a>b)
    {
        printf("Your first number is bigger than secound number a mean %d is bigger than %d\n",a,b);
        printf("Your First number %d is bigger than secound number %d",a,b);
    }
    else if (a==b)
    {
        printf("Your first number %d and secound number %d is same.",a,b);
    }
    else 
    {
        printf("your secound number is bigger than first number mean %d is bigger than %d\n",b,a);
        printf("Your secound number %d is bigger than Your first number %d",b,a);
    }
    return 0;
}