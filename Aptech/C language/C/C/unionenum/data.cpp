#include<stdio.h>
#include<string.h>
 
union Data 
{
   int i;
   float f;
   char str[20];
};
 
int main() 
{

   union Data x;  
   printf("\nSize of union =%d bytes\n",sizeof(x));  
   strcpy(x.str, "C Programming");
   printf("str : %s\n", x.str);

   return 0;
}
