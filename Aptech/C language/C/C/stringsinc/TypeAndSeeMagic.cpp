#include<stdio.h>
#include<conio.h>

int main()
{
	char str[]="Please come my darling and have dinner with me...\nI can't wait anymore.";
	int i=0;
	char x;
	printf("\n Type anything....\n\n");
	while(str[i]!='\0')
	{
		x=getch();
		printf("%c",str[i]);
		i++;
	}
	//getch();
	return 0;
}
