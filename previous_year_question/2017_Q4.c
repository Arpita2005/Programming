//WA recursive function to print first n fibonnaci number 
#include<stdio.h>
#include<conio.h>
int fibonacci(int num);
int main()
{
    int number;
    printf("How many elements you want to display:\n");
    scanf("%d",&number);
    printf("The numbers are:\n");
    for(int i=0;i<number;i++)
    {
        printf(" %d",fibonacci(i));
    }
    getch();
    return 0;
}
int fibonacci(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(num-1)+fibonacci(num-2);
    }
}
