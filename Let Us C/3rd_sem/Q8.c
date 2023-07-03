// Swapping two numbers

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("Enter Two Numbers :\n");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping the two numbers are : %d  %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n|:::::::::::::::::::::::::::::::::::::::|\n");
    printf("\nAfter swapping the two numbers are : %d  %d",a,b);
    getch();
    return 0;
}