#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }

}
int main()
{
    int num;
    printf("Enter the number to get factorial :\n");
    scanf("%d",&num);
    printf("Factorial is :%d",fact(num));
    getch();
    return 0;
}