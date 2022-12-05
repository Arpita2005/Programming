#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
	char str[100], ch;
	int i;
	printf("Enter a string :");
	gets(str);
	printf("\n");
	//for (i = strlen(str) - 1; i >= 0; i--)
	for(i=strlen(str);i>=0;i--)
		printf("%c", str[i]);

	getch();
	return 0;
}
