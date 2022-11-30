#include<stdio.h>
int main()
{
	// ? : is ternary or conditional operator
	float x,y,z,max,min;
	printf("\n Input three numbers:  \n");
	scanf("%f %f %f",&x,&y,&z);
	
	// Greatest code
	max=(x>=y && x>=z)?x:(y>=x && y>=z)?y:z;
	
	// Smallest code
    min=(x<=y && x<=z)?x:(y<=x && y<=z)?y:z;
	
	printf("\nThe greatest number=%.2f and smallest number=%.2f ",max,min);
	
	return 0;
	
}
