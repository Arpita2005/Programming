// Trace key - alpha / digit / symbol etc
// Using ASCII - American Standard Code For Information Interchange (value)
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("\n Press any key:   ");
	ch=getche();//get character and ENTER
	if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
	   printf("\n %c is an alphabet",ch);
	else if(ch>=48 && ch<=57)
	   printf("\n %c is a digit",ch);
	else if(ch==32)
	   printf("\n %c is Whitespace",ch);
	else
	   printf("\n %c is a symbol",ch);
	   
	return 0;
}
