#include<stdio.h>
int main()
{
	int a,b,max,min;
	printf("\n Enter the two numbers : \n");
	scanf("%d %d",&a,&b);
	
	//Greater Code
	if(a>=b)
		max=a;
	else
		max=b;
	
	//Smaller Code
	if(a<=b)
		min=a;
	else
		min=b;
	
	printf("\n The greater no=%d and smaller no=%d",max,min);
	
	return 0;
	
	
}
