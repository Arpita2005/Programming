#include <stdio.h>
#include <conio.h>
// Pointer with function
void sorting(int *x, int y);

int main()
{
	int a[5], b, c;

	printf("Enter no of array elements:\n");
	scanf("%d", &c);
	printf("Enter array elements:\n");
	for (b = 0; b < c; b++)
	{
		scanf("%d", &a[b]);
	}
	sorting(a, c);

	getch();
	return 0;
}

void sorting(int *x, int y)
{
	int i, j, temp;
	for (i = 0; i < y - 1; i++)
	{
		for (j = i + 1; j < y; j++)
		{

			if (*(x + i) >= *(x + j))
			{
				temp = *(x + i);
				*(x + i) = *(x + j);
				*(x + j) = temp;
			}
		}
	}
	printf("\nAscending Order Elements: \n");
	for (i = 0; i < y; i++)
	{
		printf("\t%d", *(x + i));
	}
}
