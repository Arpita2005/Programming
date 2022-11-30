#include <stdio.h>
#include<conio.h>
int main()
{
   int i, j;
   // declaring and Initializing array
   //  int arr[3][3] = {10,20,30,40,50,60,70,80,90};
   // arr[row] [column]
   int arr[3][3] = {
       // In C we don't need to do this type of thingss. We did because of to just make it beautify
       {10, 20, 30},
       {40, 50, 60},
       {70, 80, 90}};
   /* Above array can be initialized as below also
      arr[0][0] = 10; // Initializing array
      arr[0][1] = 20;
      arr[0][2] = 30;
      arr[1][0] = 40;
      arr[1][1] = 50;
     ....................
     */
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         // Accessing variables
         printf("arr[%d] [%d] = %d\n", i, j, arr[i][j]);
      }
   }
   printf("\nTabular or Matrix Form\n===============================\n");
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
         // Accessing variables
         printf("%4d", arr[i][j]);
      printf("\n");
   }
   getch();
   return 0;
}
