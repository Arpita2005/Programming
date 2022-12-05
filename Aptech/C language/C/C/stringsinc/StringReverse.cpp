#include<stdio.h>
#include<conio.h>
#include<string.h>
 //String Reverse Function
int main()
{
   char name[30] = "Hello"; 
   printf("String before strrev( ) : %s\n",name); 
   printf("String after strrev( )  : %s",strrev(name));
   
   printf("\n====================\nString Reverse-code :\n=====================\n");
   
   char str[50];
   printf("\nEnter a string:     ");
   gets(str);
   int i,n;
   for(n=0;str[n]!='\0';n++);
   printf("Reversed String:  ");
   //for(i=n-1;i>=0;i--)
   for(i=n;i>=0;i--)
   printf("%c",str[i]);
   getch();
   return 0;
}
