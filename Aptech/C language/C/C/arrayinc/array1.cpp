#include <stdio.h>
int main()
{
   int i;
   int arr[5] = {10, 20, 30, 40, 50}; // arr[5] is for how much value you want to give you can give or it will detect automatically while execute
                                      //  declaring and Initializing array in C
                                      // To initialize all array elements to 0, use int arr[5]={0};
   /* Above array can be initialized as below also
   arr[0] = 10;
   arr[1] = 20;
   arr[2] = 30;
   arr[3] = 40;
   arr[4] = 50; */
   for (i = 0; i < 5; i++)
   {
      
      printf(" arr[%d] = %d \n", i, arr[i]);
   }
   return 0;
}
// Accessing each variable
      /*
        First class[%d] is for to just print 1 to <5 which is because of var i the first one
         then secound %d is to print the inside array objects like 8,9,10 ... because of class[i]
         class[i] is using to print the inside of the array objects
         */