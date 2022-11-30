#include <stdio.h>
#include <conio.h>
int main()
{
   int *ptr, q; // int pointer ptr // and integer q
   q = 50;      // integer q value is 50
   /* display q's value using ptr variable */
   ptr = &q;                                    // pointer ptr will store the address of q mean 50
   printf("\nValue of pointer *ptr =%d", *ptr); // Value of normal variable
   printf("\nValue of iteger q =%d", q);        //  Value of normal variable
   printf("\nAddress of ptr =%u", ptr);         // Value of pointer variable or memory address

   getch();
   return 0;
}
