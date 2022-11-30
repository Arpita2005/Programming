#include <stdio.h>
#include <string.h>
//It searches string str for character ch (
int main()
{
     char mystr[40] = "I am an example of function strchr";
     printf ("%s", strchr(mystr, 'f'));
     return 0;
}