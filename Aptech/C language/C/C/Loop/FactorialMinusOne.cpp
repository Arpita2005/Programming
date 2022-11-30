#include<stdio.h>
// 0,1,5,23,119,719
int fact(int x)
{
	int r;
	if(x==0)
		r=1;
	else
		r=x*fact(x-1);
	
	return r;	
}
int main()
{
	int i;
	for(i=1;i<=5;i++)
		printf("%3d,",fact(i)-1);
	printf("%3d",fact(i)-1);
	return 0;
}
