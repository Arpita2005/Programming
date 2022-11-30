#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n;
   FILE *fptr;
   fptr = fopen("E:/program1.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter n: ");
   scanf("%d",&n);
   fprintf(fptr,"%d",n);   
   printf("\nFile is written\n");
   fclose(fptr);
   return 0;
}
