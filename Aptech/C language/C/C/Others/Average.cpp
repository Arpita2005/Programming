#include<stdio.h>
//  Average of two numbers
int main()
{
	float i,j,avg;
	printf("\n Input two numbers:  ");
	scanf("%f %f",&i,&j);
	avg=(float)(i+j)/(float)2;
	printf("\n The average of two numbers: %.2f ",avg);
	
	return 0;
}
