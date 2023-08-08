//Reverse a string without using strrev
#include <stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
   int i;
   char input[60];
   printf("Enter a string:\n");
   gets(input);
   printf("The Reverse string is:\n");
   printf(".....................\n");
   for(i=strlen(input);i>=0;i--)
   {
      printf("%c",input[i]);
   }
   getch();
   return 0;
}