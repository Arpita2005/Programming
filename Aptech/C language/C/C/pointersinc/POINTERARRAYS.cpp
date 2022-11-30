#include <stdio.h>
#include <conio.h>
// POINTER ARRAYS
int main()
{
	char *fruit[] =
		{
			"watermelon",
			"banana",
			"pear",
			"apple",
			"coconut",
			"grape",
			"blueberry"};
	int x;
	for (x = 0; x < 7; x++)
		puts(fruit[x]); //[x][0] to print the first index avalue of the string
	getch();
	return (0);
}
