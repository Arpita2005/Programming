#include <stdio.h>
#include<conio.h>
//Leap year check
int main()
{
    int year,value;
    printf("The year is: \n");
    scanf("%d",&year);
    
    if(year%4==0)
    printf("It is a leap year \n");
    else
    printf("It is not a leap year \n");
    getch();
    return 0;
    
    }