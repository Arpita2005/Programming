#include<stdio.h>
#include<conio.h>
int main()
{
    greetings(5);
    getch();
    return 0;
}
void greetings(int x)
{
    if(x>0)
    {
    printf("Good Morning\n");
    greetings(x-1);
    }
    printf("You will get a night greetings soon :) \n");
}
