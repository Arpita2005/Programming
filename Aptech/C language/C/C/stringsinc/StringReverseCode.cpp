#include<stdio.h>
#include<conio.h>
//String reverse code
int main()
{
	char str[30];
	int length=0,j;
	printf("\n Enter a string :   ");
	gets(str);
	while(str[length]!='\0')
	{
		length++;
	}
	for(j=length-1;j>=0;j--)
	    printf("%c",str[j]);
	
	getch();
	return 0;
	
}
