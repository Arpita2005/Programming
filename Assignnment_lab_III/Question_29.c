/***Write a program in C to find the Hailstone Sequence of a given number upto 1.***/
#include <stdio.h>
#include<conio.h>
   int getNextValue(int aNum)
   {
      int i = aNum;
      if (i % 2 == 0)
      {
         i = i/2;
      }
      else 
      { 
         i = 3 * i + 1;
      }
      return (i);                                     /**returning the value of next number to the called function**/
   }
   void getHailstone(int aNum)
   {
      int hlSe = aNum;  
      if (hlSe == 1)
      {
         printf("%i ", hlSe);
      }
      else
      {
         printf(" %i ", hlSe);
         getHailstone(getNextValue(hlSe));            /**calling the function itself recursively**/
      }
   }
   int countLength(int aNum)
   {
      int hlSe = aNum;  
      if(hlSe == 1)
      {
         return 1;
      }
      else
      {
         return 1+countLength(getNextValue(hlSe));    /**calling the function itself recursively**/
      }

   }

int main(int argu)
{
    int aNum;
    printf(" Input any number (positive) to start for Hailstone Sequence : ");
    scanf("%i", &aNum);
    printf("\n The hailstone sequence starting at %i is : \n", aNum);
    getHailstone(aNum);
    printf("\n\n");
    printf(" The length of the sequence is %i. \n\n", countLength(aNum));
    getch();
    return 0;
}