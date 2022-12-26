#include<stdio.h>
#include<conio.h>
int main()
{
    int number,sum=0,remainder=0,k,count=0;
    printf("Enter the whole number:\n");
    scanf("%d",&number);
    k=number;
    while(k!=0)
    {
        remainder=k%10;
        sum+=remainder;
        k=k/10;
        count++;
    }
    printf("The num of digits are:%d",count);
    printf("\nThe sum of digits are:%d",sum);
    getch();
    return 0;
}