#include <stdio.h>
#include <conio.h>
// Example of C function with return statement
// defining function
int cube(int n)
{
	return n * n * n;
}
int main()
{
	int result1 = 0, result2 = 0;

	result1 = cube(2); // calling function
	result2 = cube(3);

	printf(" Cube of 2 : %d \n", result1);
	printf(" Cube of 3 : %d \n", result2);

	getch();
	return 0;
}
