// Trace key - alphabet / digit / whitespace / symbol etc
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	int letter=0,lc=0,uc=0;
	printf("\n Press any key:   ");
	ch=getche();//get character and ENTER
	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
	   //printf("\n %c is an alphabet",ch);
	     letter=1;
	else if(ch>='0' && ch<='9')
	   printf("\n %c is a digit",ch);
	else if(ch==' ')
	   printf("\n %c is Whitespace",ch);
	else
	   printf("\n %c is a symbol",ch);
	
	if(letter==1)
	{
		lc=(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
	    uc=(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
	
    	if(lc || uc) // lc or uc is true or equal to 1
	      printf("\n %c is letter which is vowel",ch);
	    else
	      printf("\n %c is letter which is consonant",ch);
	}
	return 0;
}
