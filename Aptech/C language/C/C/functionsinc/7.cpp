#include <stdio.h>
#include <conio.h>
// Example : Factorial of a number using Recursion
int factorial(int x);

int main()
{
	int a, b;
	printf("Enter no.");
	scanf("%d", &a);
	b = factorial(a);
	printf("Factorial of %d   =  %d", a, b);
	printf("\n Press Enter to exit !");
	getch();
	return 0;
}
int factorial(int x)
{
	int r = 1;
	if (x == 0)
		return 1;
	else
		r = x * factorial(x - 1); // Stack   - LIFO
	return r;
}
