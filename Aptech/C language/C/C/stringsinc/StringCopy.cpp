#include<stdio.h>
#include<conio.h>
#include<string.h>
// String Copy
int main()
{
     char s1[30] = "string 1";
     char s2[80] = "string 2 : I am gonna copied into s1";
     /* this function has copied s2 into s1*/
     strcpy(s1,s2);
     printf("String s1 is: %s", s1);
     getch();
     return 0;
}
