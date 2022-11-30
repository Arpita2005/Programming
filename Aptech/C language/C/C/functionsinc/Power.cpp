#include<stdio.h>
float power(float a,float b);

int main()
{
	float a,b;
	printf("\n Enter the base  ");
	scanf("%f",&a);
	printf("\n Enter the power ");
	scanf("%f",&b);
	printf("\n The result is %f",power(a,b));
	return 0;
}
float power(float b,float p)
{
	float p1,r,res;
	if(p==0)
		r=1.0;
	else if(p>0.0)
	{
		r=b*power(b,p-1);
	}
	else if(p<0.0)
	{
		p1=-p;
		res=b*power(b,p1-1);
		r=(float)1/(float)res;
	}
	return r;
}
