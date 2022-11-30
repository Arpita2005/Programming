// C program to add two matrix 
#include<stdio.h> 
int main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d %d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
   {
   	  for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
   }   
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++)
   {
   		for (d = 0 ; d < n; d++)
            scanf("%d", &second[c][d]);
   }  
   printf("\n\n 1 st  matrix\n");
   for (c = 0; c < m; c++) 
   {
      for (d = 0 ; d < n; d++)
	  {
         printf("%4d", first[c][d]);
      }
      printf("\n");
   }
   printf("\n\n 2 nd  matrix\n");
   for (c = 0; c < m; c++) 
   {
      for (d = 0 ; d < n; d++)
	  {
         printf("%4d", second[c][d]);
      }
      printf("\n");
   }
 
   printf("Sum of entered matrices:-\n");
 
   for (c = 0; c < m; c++) 
   {
      for (d = 0 ; d < n; d++)
	  {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%5d", sum[c][d]);
      }
      printf("\n");
   }
 
   return 0;
}

