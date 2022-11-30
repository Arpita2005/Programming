#include<stdio.h>
int main()
{
    // Assignment Operator
    int i=250,j=110,a=100,b=250,c=120; //Simple Assignment Operator
	i+=2; // Compound Assignment  Operator     i=i+2
	printf("\ni=%d",i);
	j-=2; // Compound Assignment  Operator     j=j-2
	printf("\nj=%d",j);
	i*=3;  // Compound Assignment  Operator     i=i*3
	printf("\ni=%d",i);
	j/=3;  // Compound Assignment  Operator     j=j/3
	printf("\nj=%d",j);
	i/=j; // Compound Assignment  Operator     i=i/j
	printf("\ni=%d",i);
	i%=3; // Compound Assignment  Operator     i=i%3
	printf("\ni=%d",i);	
	printf("\n a=%d , b=%d , c=%d",a,b,c);
	a=b=c=400; // Multiple Assignment Operator
	printf("\n a=%d , b=%d , c=%d",a,b,c);
	c=(a=150)+(b=670);  // Embedded Assignment operator
	printf("\n a=%d , b=%d , c=%d",a,b,c);	
	c=(a=15)*(b=24);  // Embedded Assignment operator
	printf("\n a=%d , b=%d , c=%d",a,b,c);	
	
	return 0;
}
