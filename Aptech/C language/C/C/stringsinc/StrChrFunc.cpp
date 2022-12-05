#include <stdio.h>
#include<conio.h>
#include <string.h>
//It searches string str for character ch (
int main()
{
     char mystr[40] = "I am an example of function strchr";
     printf ("%s", strchr(mystr, 'a'));
     getch();
     return 0;
}