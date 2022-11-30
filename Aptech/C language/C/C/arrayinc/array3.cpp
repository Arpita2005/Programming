// Program to find the average of n (n <= 10) numbers using arrays
#include <stdio.h>
#include<conio.h>
int main() {
	int marks[10], i, n, sum = 0;
	float average;
	printf("Enter no of elements : (<=10)) ");
	scanf("%d", &n);
	if (n > 10)
		printf("\n More than 10 numbers is not allowed");
	else {
		printf("Enter %d numbers: \n", n);
		for (i = 0; i < n; ++i) {
			scanf("%d", &marks[i]);
			sum += marks[i];
		}
		// Up Type Casting
		average = (float)sum / (float)n;
		printf("Sum=%d and average marks = %.2f", sum, average);
	}
	getch();
	return 0;
}
