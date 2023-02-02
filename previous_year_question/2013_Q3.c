//To print natural numbers from 1 to n
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter the last number :\n");
    scanf("%d",&num);
    printf("The numbers are :\n");
    for(int i=1;i<=num;i++)
    {
        printf("%d\n",i);
    }
    getch();
    return 0;
}