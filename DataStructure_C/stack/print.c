// *****#####
#include<stdio.h>
#include<conio.h>
int print(int n)
{
    if(n==0)
    return 0;
    else
    {
        printf("*");
        print(n-1);
        printf("#");
    }
}
int main()
{
    int num;
    printf("Enter how much time do you want :\n");
    scanf("%d",&num);
    print(num);
    getch();
    return 0;
}