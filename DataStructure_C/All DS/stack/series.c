#include<stdio.h>
#include<conio.h>
int series(int n)
{
    if(n==0)
    return 0;
    else
    {   series(n-1);
        printf("%d\t",n);
    }
}
int main()
{
    int num;
    printf("Enter the starting number :\n");
    scanf("%d",&num);
    series(num);
    getch();
    return 0;
}