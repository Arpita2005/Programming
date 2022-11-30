#include<stdio.h>
#include<stdlib.h>
// Binary mode read & write used when there is structure in the program
struct threeNum
{  
    int n1, n2, n3;
};
int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;
   // wb - write binary
   if ((fptr = fopen("E:/program.bin","wb")) == NULL)
   {
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   for(n = 1; n < 5; ++n)
   {
      num.n1 = n;
      num.n2 = 5*n;
      num.n3 = 5*n + 1;
      // fwrite - function to write binary data
      fwrite(&num, sizeof(struct threeNum), 1, fptr); 
   }
   fclose(fptr); 
   
   return 0;
}
