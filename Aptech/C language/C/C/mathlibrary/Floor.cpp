#include<stdio.h>
#include<math.h>
/*
  Def: In the C Programming Language, the floor function returns the largest integer that 
  is smaller than or equal to x (ie: rounds downs the nearest integer).
  Syntax:  float floor(float var);
*/
int main() 
{
   float val1, val2, val3, val4;

   val1 = 1.6;
   val2 = 1.2;
   val3 = 2.8;
   val4 = 2.3;

   printf ("value1 = %.0lf\n", floor(val1));
   printf ("value2 = %.0lf\n", floor(val2));
   printf ("value3 = %.0lf\n", floor(val3));
   printf ("value4 = %.0lf\n", floor(val4));
   
   return 0;
}
