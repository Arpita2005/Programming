//Write a program in C to print first 50 natural numbers using recursion.
#include<stdio.h>
#include<conio.h>
void print_num(int num);
int main()
{
    int num;
    printf("Enter the last range nummber:\n");
    scanf("%d",&num);
    printf("The numbers are:\n");
    printf("=======================\n");
    print_num(num);
    getch();
    return 0;
}
void print_num(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        print_num(num-1);
        printf("%d\n",num);
    }
}