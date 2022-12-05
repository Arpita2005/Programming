#include <stdio.h>
#include<conio.h>
#include <string.h>
/*
  Following is the declaration for strncpy() function.

char *strncpy(char *dest, const char *src, size_t n)
Parameters
dest - This is the pointer to the destination array where the content is to be copied.

src - This is the string to be copied.

n - The number of characters to be copied from source.
*/

int main () 
{
   char src[40];
   char dest[12];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "This is tutorialspoint.com");
   strncpy(dest, src, 10);

   printf("Final copied string : %s\n", dest);
   getch();
   return(0);
}
