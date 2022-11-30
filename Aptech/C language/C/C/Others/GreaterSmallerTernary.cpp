#include<stdio.h>
int main()
{
	int a,b,max,min;
	printf("\n Enter the two numbers : \n");
	scanf("%d %d",&a,&b);
	
	//Greater Code
	max=(a>=b)?a:b;	
	//Smaller Code
	min=(a<=b)?a:b;	
	
	printf("\n The greater no=%d and smaller no=%d",max,min);
	
	return 0;	
	
}
