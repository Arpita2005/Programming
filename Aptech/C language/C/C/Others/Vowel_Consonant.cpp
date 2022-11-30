#include<stdio.h>
#include<conio.h> // Console Input Output Header File
//Check vowel or consonant
int main()
{
	char x;
	int lc,uc;
	printf("\nInput a letter:       ");
	//scanf("%c",&x);
	x=getche();// get character and ENTER
	
	lc=(x=='a' || x=='e' || x=='i' || x=='o' || x=='u');
	uc=(x=='A' || x=='E' || x=='I' || x=='O' || x=='U');
	
	if(lc || uc) // lc or uc is true or equal to 1
	   printf("\n %c is vowel",x);
	else 
	   printf("\n %c is consonant",x);
	
	return 0;
	
}

