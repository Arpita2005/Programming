#include <stdio.h>
#include <conio.h>

// Function returning pointer
int *larger(int *, int *);
int main()
{
	int a = 15;
	int b = 92;
	int *p;
	p = larger(&a, &b);			// p is the value of a and b
	printf("%d is larger", *p); // *p is the value of a and b

	getch();
}

int *larger(int *x, int *y)
{
	if (*x > *y)
		return x;
	else
		return y;
}
