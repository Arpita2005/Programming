#include<stdio.h>
// S= 1/!1 +  2/!2  +  3/!3  +................+  n/!n
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
	int i,n;
	float sum=0.0;
	int fact(int);
	printf("\nInput the value of n:   ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=(float)((float)i/(float)(fact(i)));
	}
	printf("\nSum=%0.3f",sum);
	
	return 0;
}
