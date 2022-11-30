#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,r;
	printf("\n Enter the base:    ");
	scanf("%lf",&a);
	printf("\n Enter the power:    ");
	scanf("%lf",&b);
	r=pow(a,b);
	printf("\n The power of %.2lf to %.2lf = %.2lf",a,b,r);
	return 0;
	
}
// double pow(double base,double power);
