#include <stdio.h>
#include <conio.h>
int main()
{
	char str[] = "MATS";
	int i, j, k;
	char space = ' ';
	for (i = 3; i >= 0; i--)
	{
		for (j = 1; j <= i; j++)
			printf("%2c", space);
		for (j = i; j <= 3; j++)
			printf("%2c", str[j]);
		for (j = 2; j >= i; j--)
			printf("%2c", str[j]);
		printf("\n");
	}
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%2c", space);
		for (j = i; j <= 3; j++)
			printf("%2c", str[j]);
		for (j = 2; j >= i; j--)
			printf("%2c", str[j]);
		printf("\n");
	}

	getch();
	return 0;
}
