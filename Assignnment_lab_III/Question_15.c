/***Write a program in C to Print Fibonacci Series using recursion.***/

#include<stdio.h>
#include<conio.h>
int term;
int fibonacci(int prNo, int num);
 
void main() 
{
   static int prNo = 0, num = 1;
   printf(" Input number of terms for the Series : ");
   scanf("%d", &term);
 printf(" The Series are :\n"); 
   printf(" 1  ");
   fibonacci(prNo, num);
    printf("\n\n");
}
int fibonacci(int prNo, int num) 
{
   static int i = 1;
   int nxtNo;
 
   if (i == term)
      return (0);
   else 
   {
      nxtNo = prNo + num;
      prNo = num;
      num = nxtNo;
      printf("%d  ", nxtNo);
 
      i++;
      fibonacci(prNo, num);
   }
   getch();
   return 0;
}