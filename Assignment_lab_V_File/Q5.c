//Write a C program to compare two files.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    FILE *sf1,*sf2;
   int ch1, ch2;
   char name1[40], name2[40];
 
   printf("Enter name of first file :\n");
   gets(name1);
 
   printf("Enter name of second file:\n");
   gets(name2);
 
   sf1 = fopen(name1, "r");
   sf2 = fopen(name2, "r");
 
   if (sf1 == NULL||sf2==NULL) 
   {
      printf("Cannot open %s%s for reading ", name1,name2);
      exit(1);
   } 
   else 
   {
      ch1 = getc(sf1);
      ch2 = getc(sf2);
 
      while ((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2)) {
         ch1 = getc(sf1);
         ch2 = getc(sf2);
      }
 
      if (ch1 == ch2)
         printf("Files are identical \n");
      else if (ch1 != ch2)
         printf("Files are Not identical \n");
 
      fclose(sf1);
      fclose(sf2);
   }
   getch();
   return 0;
}