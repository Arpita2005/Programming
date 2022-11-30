#include <stdio.h>
#include <conio.h>
int main()
{
	// Auto Storage Class
	int year = 2022;
	auto month = 8; // auto works like int
	auto day = 3;	// auto works like int
	printf("\n Today's date = %d.%d.%d ", day, month, year);

	// Register Storage Class
	register int kilometer = 3; // see note 2
	printf("\n The distance of my home and office is more than %d kms", kilometer);

	getch();
	return 0;
}
/*
	Note 1 :
	auto: This is the default storage class for all the variables declared inside a function or a block.
	 Hence, the keyword auto is rarely used while writing programs in C language. Auto variables can be
	  only accessed within the block/function they have been declared and not outside them (which defines their scope).
	   Of course, these can be accessed within nested blocks within the parent block/function in which the auto
	   variable was declared. However, they can be accessed outside their scope as well using the concept of
		pointers given here by pointing to the very exact memory location where the variables reside. They
		are assigned a garbage value by default whenever they are declared.





Note 2 :
Registers are faster than memory to access, so the variables which are most frequently used in a C
program can be put in registers using register keyword. The keyword register hints to compiler that
a given variable can be put in a register. It’s compiler’s choice to put it in a register or not.
Generally, compilers themselves do optimizations and put the variables in register.

1) If you use & operator with a register variable then compiler may give an error or warning
(depending upon the compiler you are using), because when we say a variable is a register,
it may be stored in a register instead of memory and accessing address of a register is invalid.
Try below program.

*/
