//Write a program in C to print first 50 natural numbers using recursion.
#include<stdio.h>
#include<conio.h>
int natural_number(int n);
int main()
{
    int n=1;
    printf("Recursion function to print natural numbers\n");
    printf("Your first 50 natural numbers are:\n");
    natural_number(n);
    getch();
    return 0;
}
int natural_number(int n)
{
    if(n<=50)
    {
        printf("%d\n",n);
        natural_number(n+1);
    }

}
