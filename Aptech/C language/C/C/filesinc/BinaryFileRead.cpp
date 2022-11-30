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
   // rb - read file in read binary mode
   if ((fptr = fopen("E:/program.bin","rb")) == NULL){
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   // fread - function to read binary data from a file
   for(n = 1; n < 5; ++n)
   {
      fread(&num, sizeof(struct threeNum), 1, fptr); 
      printf("n1: %d \t n2: %d \t n3: %d \n", num.n1, num.n2, num.n3);
      // \t - Horizontal tab space
   }
   fclose(fptr); 
  
   return 0;
}
