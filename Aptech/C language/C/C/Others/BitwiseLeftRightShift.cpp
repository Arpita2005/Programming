#include<stdio.h>
//  Bitwise Operators - Left Shift & Right Shift
int main()
{{
    int a=24,b=3,c; //c or c=0 is same
    c=a<<b; // Bitwise Left Shift Operator a<<b = a * 2^b = 24 * 2^3 =24 * 8 =  192
    printf("\n Bitwise Left Shift = c=%d",c);
    a=240,b=2; 
	c=a>>b;  // Bitwise Right Shift Operator a<<b = a / 2^b =  240 / 2^2 = 240 / 4 = 60 
	printf("\n Bitwise Right Shift = c=%d",c);
	
	return 0;
}}
