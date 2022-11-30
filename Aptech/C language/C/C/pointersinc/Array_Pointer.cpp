#include <stdio.h>
#include <conio.h>
int main()
{
   char charArr[4]; // charecter variable name=charArr and value is 4 mean 5
   int i;           // integer variable name= i

   for (i = 0; i < 4; ++i)
   {
      printf("Address of charArr[%d] = %u\n", i, &charArr[i]); //%u is = unassigned integer value
      // printf("Address of charArr[%d] = %d\n", i, &charArr[i]); //%u is = unassigned integer value
   }
   // program for test
   // int u = 10;
   // printf("%u", u);
   getch();
   return 0;
} 

// Another program by me

// // Modified program by Chittajit
// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//    int i, numbers = 4;
//    char Array_Print[numbers];
//    for (i = 0; i < numbers; i++)
//    {
//       printf("The address of Array_Print[%d] is %u \n", i + 1, &Array_Print[i]);
//    }
//    printf("Press enter to exit \n");
//    getch();
//    return 0;
// }
