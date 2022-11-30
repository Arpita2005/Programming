#include <stdio.h>
#include <string.h>
// String Length when maxlength=30
int main()
{
     char str1[20] = "BeginnersBook";
     printf("\nLength of string str1 when maxlen is 30: %d", strnlen(str1, 30));  
     printf("\nLength of string str1 when maxlen is 10: %d", strnlen(str1, 10));  
     return 0;
}
