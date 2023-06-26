// To find the largest element between 3 numbers 
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter the three numbers :\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2&&num1>num3)
    {
        printf("%d is largest number ",num1);
    }
    else if(num2>num1&&num2>num3)
    {
        printf("%d is largest number ",num2);
    }
    else if(num3>num1&&num3>num2)
    {
        printf("%d is largest number ",num3);
    }

    getch();
    return 0;
}