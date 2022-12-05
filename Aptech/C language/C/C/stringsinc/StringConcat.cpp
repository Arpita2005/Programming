#include <stdio.h>
#include<conio.h>
#include <string.h>
// String Concat
int main()
{
     char s1[10],s2[10],sp[2]=" ";
     
     printf("\nInput string-1:   ");
     gets(s1);
     
     printf("\nInput string-2:   ");
     gets(s2);
   
     strcat(s1,sp);
     strcat(s1,s2);
     
     printf("Output string after concatenation: %s", s1);
     getch();
     return 0;
}
