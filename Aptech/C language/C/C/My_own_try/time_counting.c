#include<stdio.h>
#include<conio.h>
#define SEC 3600
#define HOUR 60
int main()
{
    int time,sec=0,rem=0,hour=0,min=0;
    printf("Enter the time as a whole number:\n");
    scanf("%d",&time);
    hour=time/SEC;
    rem=time%SEC;
    min=rem/HOUR;
    sec=rem%HOUR;
    printf("Result is:\n %d %d %d ",hour,min,sec);
    getch();
    return 0;
}