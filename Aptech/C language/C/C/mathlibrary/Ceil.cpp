#include <stdio.h>
#include <math.h>
/*
  Def:
   This function returns nearest integer value which is greater than or equal to the
   argument passed to this function.
   
   Syntax:  float ceil(float var);
*/
int main () 
{
   float val1, val2, val3, val4;  //Float to get store some decimal value
//Let's get store some decimal value to get print the greater nearest value
//Because of float variable we have to print %f to print the value

   val1 = 1.6;
   val2 = 1.2;
   val3 = 2.8;
   val4 = 2.3;
//As we did here
   printf ("value1 = %.0f\n", ceil(val1));
   printf ("value2 = %.0f\n", ceil(val2));     
   
   printf ("value3 = %.0f\n", ceil(val3));
   printf ("value4 = %.0f\n", ceil(val4));
   
   return 0;
}

