#include <stdio.h>
#include <conio.h>
// Example of C function with no return statement
// defining function
void hello()
{
	printf("hello c programming\n");
}
int main()
{
	hello(); // calling a function
	hello();
	hello();
	for (int i = 1; i <= 5; i++)
	{
		hello();
	}

	getch();
	return 0;
}