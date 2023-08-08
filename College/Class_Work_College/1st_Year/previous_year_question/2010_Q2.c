//Take an integer.Make it reverse and subtract 9 from it
#include<stdio.h>
#include<conio.h>
#define sub 9
int main()
{
    int num,k,rem,reverse=0,result;
    printf("Enter a number :-\n");
    scanf("%d",&num);
    k=num;
    while(k!=0)
    {
        rem=k%10;
        reverse=reverse*10+rem;
        k=k/10;
    }
    printf("The Reverse is:%d\n",reverse);
    printf("\n===================\n");
    result=reverse-sub;
    printf("The result is:%d\n",result);
    getch();
    return 0;
}