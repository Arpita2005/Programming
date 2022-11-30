#include<stdio.h>
//Find the Frequency of Characters
int main()
{
   char str[1000], ch;
   int i, frequency = 0;

   printf("Enter a string: ");
   gets(str);

   printf("Enter a character to find the frequency: ");
   scanf("%c",&ch);

   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++frequency;
   }

   if(frequency>0)
   		printf("Frequency of %c in %s = %d", ch, str , frequency);
   else
   		printf("%c is not found in %s", ch, str);

   return 0;
}
