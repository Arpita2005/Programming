#include<stdio.h> 
int main()
{
   int i;
   double arr[] = {10.87,20.11,30.49,40.22,50.33,65.78};  
     
   for(i=0;i<6;i++)
   {
      // Accessing each variable
      printf(" arr[%d] = %lf \n", i, arr[i]);
   }
   return 0;
}
