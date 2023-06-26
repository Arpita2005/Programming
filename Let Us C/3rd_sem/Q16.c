// Leap year or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("ENter the Year :\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printF("It is a leap year \n");
    }
    else
    {
        printf("It is not a leap year \n");
    }
    getch();
    return 0;
}