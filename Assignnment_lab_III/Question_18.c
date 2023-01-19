/*Write a program in C to find the sum of digits of a number using recursion.*/
#include <stdio.h>
#include<conio.h>
int DigitSum(int num);
int main()
{
    int n1, sum;
    printf(" Input any number : ");
    scanf("%d", &n1);
    sum = DigitSum(n1);                         /**call the function for calculation**/
    printf(" The Sum of digits of %d = %d\n", n1, sum);
    getch();
    return 0;
}

int DigitSum(int n1)
{
    if(n1 == 0)
        return 0;
         
    return ((n1 % 10) + DigitSum(n1 / 10));    /**calling the function DigitSum itself**/
}