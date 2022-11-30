#include <stdio.h>
#define PI 3.1416
// macro preprocessor to define a constant
int main()
{
	float r, A;
	printf("\n Enter the radius:    ");
	scanf("%f", &r);
	A = PI * r * r;
	printf("\n The area = %.0f", A);
	return 0;
}
/*
What is #define in C? #define is a preprocessor directive that is used to define macros
 in a C program. #define is also known as a macros directive. #define directive is used
  to declare some constant values or an expression with a name that can be used
  throughout our C program.

*/

/*
		How many types of const in C language?
ans: 	const int i=100;
		const float j=24.56;
		const char ch='P';
		const char str[]="Hello";
		***  "Constant can't be modified"  ***
*/
