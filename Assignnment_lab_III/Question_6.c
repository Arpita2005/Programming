#include<stdio.h>
#include<conio.h>
void decimal_to_binary();
int main()
{
    decimal_to_binary();
    getch();
    return 0;
}
void decimal_to_binary()
{
    int number,i=0,a[100];

    printf("Enter the number:\n");
    scanf("%d",&number);
    for(i=0;number>0;i++)
    {
        a[i]=number%2;
        number=number/2;
    }
    printf("Binary of given number:\n");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}