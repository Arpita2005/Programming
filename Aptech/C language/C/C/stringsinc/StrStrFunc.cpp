#include<stdio.h>
#include<conio.h>
#include<string.h>
//It is similar to strchr, except that it searches for string srch_term instead 
//of a single char.
int main()
{
     char inputstr[70] = "String Function in C at BeginnersBook.COM";
     
     printf("\nOutput string is: %s", strstr(inputstr, "Begi"));//BeginnersBook.COM
     
     printf("\nOutput string is: %s", strchr(inputstr,'i'));
	 //ing Function in C at BeginnersBook.COM
	 
     printf("\nOutput string is: %s", strrchr(inputstr,'i'));
     //innersBook.COM
     getch();
     return 0;
}
