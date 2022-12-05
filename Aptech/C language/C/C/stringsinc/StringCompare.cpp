#include<stdio.h>
#include<conio.h>
#include<string.h>
// String Compare and string copy
int main()
{
     char s1[20] = "BeginnersBook";
     char s2[20] = "BeginnersBook.COM";
     char s3[20],s4[20];
     if(strcmp(s1, s2) ==0)
     {
        printf("string 1 and string 2 are equal");
     }
	 else
     {
         printf("string 1 and 2 are different");
     }    
     printf("\n");     
     strcpy(s3,"BeginnersBook");
     strcpy(s4,"BEGINNERSBOOK");
      // i - Ignore Case
     if(strcmpi(s3, s4) ==0)
     {
        printf("string 3 and string 4 are equal");
     }
	 else
     {
         printf("string 3 and 4 are different");
     }
     getch();
     return 0;
}
