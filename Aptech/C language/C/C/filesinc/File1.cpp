#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n;
   FILE *fptr;
   fptr = fopen("salary.txt", "r");

   if (fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   fscanf(fptr, "%d", &n);
   printf("Value of n=%d", n);
   fclose(fptr);
   return 0;
}
