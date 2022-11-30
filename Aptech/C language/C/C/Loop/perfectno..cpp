#include<stdio.h>
/* Check whether a no is perfect no or not
       --- Perfect numbers are the positive integers that are equal to the sum 
 of its factors except for the number itself. In other words, perfect
 numbers are the positive integers which are the sum of its proper divisors.
 */
int main()
{
	long int i,j,n,x,sum;
	printf("Enter the upper limit:  ");
	scanf("%ld",&n);
	printf("\n The perfect numbers between 1 and %ld: \n\n",n);
	for(j=2;j<=n;j++)
	{
		sum=0;
		x=j;
		for(i=1;i<x;i++)
		{		
			if(x%i==0)
			{
				sum+=i;
			}
		}
		if(sum==x)
			printf("\n%ld",x);
	}
	return 0;
}
