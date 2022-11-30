#include <stdio.h>
 int main()
 {
 	 int a= 33 , b=3,c;
	c= a>>b; //c = a / 2^3 = 33 / 8 = 4
	printf("\n Right Shift a=%d b=%d c=%d",a,b,c);
 	return 0;
 }
