#include <stdio.h>
#include <conio.h>
int main()
{
   int var1;
   char var2[10];

   int *p1;
   char *p2;

   p1 = &var1;
   p2 = var2; //   var2 = &var2[0] - address of first or base element  - base address

   printf("Address of var1 variable: %x\n", &var1);
   printf("Address of var2 variable: %x\n", var2);

   getch();
   return 0;
}
