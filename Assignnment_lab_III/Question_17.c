/*Write a program in C to count the digits of a given number using recursion.*/
#include <stdio.h>
#include<conio.h>
int noOfDigits(int n1);
int main()
{
  int n1,ctr;
    printf(" Input a number : ");
    scanf("%d",&n1);
    ctr = noOfDigits(n1);
    printf(" The number of digits in the number is : %d \n",ctr);
    getch();
    return 0;
}
int noOfDigits(int n1)
{
    static int ctr=0;
     if(n1!=0)
     {
          ctr++;
         noOfDigits(n1/10);
    }
    return ctr;
}