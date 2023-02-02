//Reverse a string without using strrev
#include <stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
   char s[1000], r[1000];
   int begin, end, count = 0,sen;

   printf("Input a string\n");
   gets(s);
   sen=strlen(s);

   end = sen - 1;

   for (begin = 0; begin < sen; begin++)
   {
      r[begin] = s[end];
      end--;
   }

   r[begin] = '\0';
   printf("The Reverse string is:\n");
   printf(".....................\n");
   printf("%s\n", r);
   getch();
   return 0;
}