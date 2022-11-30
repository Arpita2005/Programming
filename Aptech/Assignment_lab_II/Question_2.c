// read n number of values in an array and display it in reverse order
#include <stdio.h>
#include <conio.h>
int main()
{
	int i, n, a[1000];

	printf("Input the number of elements to store in the array :");
	scanf("%d", &n);

	printf("Input %d number of elements in the array :\n", n);
	for (i = 0; i < n; i++)
	{
		printf("element : %d\n", i + 1);
		scanf("%d", &a[i]);
	}

	printf("The values store into the array are : \n");
	for (i = 0; i < n; i++)
	{
		printf("%5d\n", a[i]);
	}

	printf("The values store into the array in reverse are :\n");
	for (i = n - 1; i >= 0; i--)
	{
		printf("%d\n", a[i]);
	}
	getch();
	return 0;
}