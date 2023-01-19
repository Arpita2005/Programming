#include <stdio.h>
#include<conio.h>
int HailstoneNumbers(int N)
{
	static int c;

	printf("%d\n",N);

	if (N == 1 && c == 0) {

		// N is initially 1.
		return c;
	}
	else if (N == 1 && c != 0) {

		// N is reduced to 1.
		c++;
		return c;
	}
	else if (N % 2 == 0) {

		// If N is Even.
		c++;
		HailstoneNumbers(N / 2);
	}
	else if (N % 2 != 0) {

		// N is Odd.
		c++;
		HailstoneNumbers(3 * N + 1);
	}
}

// Driver code
int main()
{
	int N = 7;
	int x;
	// Function to generate Hailstone
	// Numbers
	x = HailstoneNumbers(N);
	printf("\n");
	printf("Number of Steps: %d",x);
    getch();
	return 0;
}
