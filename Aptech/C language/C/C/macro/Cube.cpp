#include <stdio.h>
#define cubeofsum(x, y) x *x *x + 3 * x *x *y + 3 * x *y *y + y *y *y
// cubeofsum = x^3 + 3x^2y + 3xy^2 + y^3 (It's a formula)
int main()
{
	float a, b, r; // Use float to store 12.00 types of number
	printf("Print cube of sum ");
	printf("\n Enter the 1 st number:    ");
	scanf("%f", &a);
	printf("\n Enter the 2 nd number:    ");
	scanf("%f", &b);
	printf("Formula a^3 + 3a^2b + 3ab^2 + b^3 \n");
	// x^3  +  3x^2y   +   3xy^2    + y^3
	printf("Calculation of :  %.0f^3 + 3 %.0f^2 %.0f + 3 %.0f %.0f^2 + %.0f^3 \n", a, a, b, a, b, b);
	r = cubeofsum(a, b); // It's will calculate as per formula
	printf("\n The result is %.2f", r);
	return 0;
}
/*
What is #define in C? #define is a preprocessor directive that is used to
 define macros in a C program. #define is also known as a macros directive.
  #define directive is used to declare some constant values or an expression
   with a name that can be used throughout our C program.

*/
