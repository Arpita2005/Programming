#include<stdio.h>
#include<time.h>
#include<conio.h>
int main()
{
    time_t Ai;
    char* date;
    time(&Ai);
    date=ctime(&Ai);
    printf("Current Date and time is : \n%s",date);
    getch();
    return 0;
}