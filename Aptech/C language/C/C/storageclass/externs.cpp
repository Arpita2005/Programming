#include <stdio.h>
#include <conio.h>
// Variable declaration:
extern int a, b;
extern int c;
extern float f; // See Note : 1
int main()
{
	/* variable definition: */
	int a, b;
	int c;
	float f;
	/* actual initialization */
	a = 10;
	b = 20;
	c = a + b;
	printf("value of c : %d \n", c);
	f = 70.0 / 3.0;
	printf("value of f : %f \n", f);

	getch();
	return 0;
}

/*
extern: Extern storage class simply tells us that the variable is defined elsewhere and
not within the same block where it is used. Basically, the value is assigned to it in a
different block and this can be overwritten/changed in a different block as well. So an
 extern variable is nothing but a global variable initialized with a legal value where
 it is declared in order to be used elsewhere. It can be accessed within any function/block.
 Also, a normal global variable can be made extern as well by placing the ‘extern’ keyword
  before its declaration/definition in any function/block. This basically signifies that we
   are not initializing a new variable but instead we are using/accessing the global
   variable only. The main purpose of using extern variables is that they can be accessed
   between two different files which are part of a large program. For more information on
   how extern variables work, have a look at this link.

*/
