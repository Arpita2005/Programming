// WAP to read n numbers and print even and odd numbers upto n 
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the last range of numbers :\n");
    scanf("%d",&n);
    printf("Enter The Numbers :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&i);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("It is a even number\n");
        }
        else
        {
            printf("It is an odd number \n");
        }
    }
    getch();
    return 0;
}