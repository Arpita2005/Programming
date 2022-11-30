#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j;
	char input, temp = 'A';
	printf("Enter uppercase character you want in triangle at last row: ");
	scanf("%c", &input);
	for (i = 1; i <= (input - 'A' + 1); ++i)
	{
		for (j = 1; j <= i; ++j)
			printf("%2c", temp);
		++temp;
		printf("\n");
	}
	printf("Press Enter to exit ! ");
	getch();
	return 0;
}
