#include <stdio.h>
#include<conio.h>
int main() {
	int a=33, b=3, c;
	c=a<<b;	//c = a * 2^3 = 33 * 8 = 264
	printf("\n Left Shift a=%d b=%d C =%d",a,b,c);
	getch();
	return 0;
}
/*
 5<<1 = 10
	16 8 4 2 1
5= 	0  0 1 0 1
10=	0  1 0 1 0   ( shift one left side )
================
     8 + 2 = 10
*/
