#include<stdio.h>
#include<conio.h>
void even_odd_check();
int main()
{
    even_odd_check();
    getch();
    return 0;
}
void even_odd_check()
{
    int number;
    printf("Enter your number:\n");
    scanf("%d",&number);

    if(number%2==0)
    {
        printf("The number is even number\n");
    }
    else
    {
        printf("The number is odd number\n");
    }
}
