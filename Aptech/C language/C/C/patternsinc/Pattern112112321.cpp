#include <stdio.h>
#include <conio.h>

int main()
{
	int x, y, z, a;
	for (x = 1; x <= 5; x++)
	{
		for (y = 5; y >= x; y--)
			printf("%2c", ' ');
		for (z = 1; z <= x; z++)
			printf("%2d", z);
		for (a = z - 2; a >= 1; a--)
			printf("%2d", a);
		printf("\n");
	}

	getch();
	return 0;
}
