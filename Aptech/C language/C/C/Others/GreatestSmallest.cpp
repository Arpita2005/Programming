#include<stdio.h>
int main()
{
	float x,y,z,max,min;
	printf("\n Input three numbers:  \n");
	scanf("%f %f %f",&x,&y,&z);
	// Greatest code
	if(x>=y && x>=z)
		max=x;
	else if(y>=x && y>=z)
		max=y;
	else
		max=z;
	// Smallest code
	if(x<=y && x<=z)
		min=x;
	else if(y<=x && y<=z)
		min=y;
	else
		min=z;
	
	printf("\nThe greatest number=%.2f and smallest number=%.2f ",max,min);
	return 0;
	
}
