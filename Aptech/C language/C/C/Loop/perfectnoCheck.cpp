#include<stdio.h>
/* Check whether a no is perfect no or not
       --- Perfect numbers are the positive integers that are equal to the sum 
 of its factors except for the number itself. In other words, perfect
 numbers are the positive integers which are the sum of its proper divisors.
 */
int main()
{
	int i,n,j,sum=0;
	printf("Enter a No.");
	scanf("%d",&n);
    for(i=1;i<n;i++)
	{		
		if(n%i==0)
		{
			sum+=i;
			printf("%d\n",i);
		}
	}
	if(sum==n)
		printf("\n%d is a Perfect No.",n);
	else
		printf("\n%d is not a Perfect No.",n);
	
	return 0;
}
