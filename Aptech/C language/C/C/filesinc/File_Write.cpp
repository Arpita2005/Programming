//Write to a text file using fprintf()
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("E:/program1.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter number: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;
}
