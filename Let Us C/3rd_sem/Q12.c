#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("ENter the number :\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("It is an even number \n");
    }
    else if(num%2!=0)
    {
        printf("It is an odd number \n");
    }

    getch();
    return 0;
}