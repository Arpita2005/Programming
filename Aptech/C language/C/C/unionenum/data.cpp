#include<stdio.h>
#include<string.h>
#include<conio.h>
union Data 
{
   int i[40]; //the size of int is 4
   float f;     // the size of float is 4
   char str[20]; // the size of char is 1
};
 
int main() 
{

   union Data x;  
   printf("\nSize of union =%d bytes\n",sizeof(x));  
   strcpy(x.str, "C Programming");
   printf("str : %s\n", x.str);
   getch();
   return 0;
}
