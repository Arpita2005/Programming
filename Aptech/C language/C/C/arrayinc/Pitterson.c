#include<stdio.h>
int main()
{
	int up,lo,temp,n,fact,sum,i,x;
	
	printf("Enter the Lower Limit: ");
	scanf("%d",&lo);
	printf("Enter the Upper Limit: ");
	scanf("%d",&up);
	printf("\nKrishnamurthy's Number or Pitterson's Numbers  :  \n\n");
	for(x=lo;x<=up;x++)
	{
		temp=x;
		sum=0;
		while(temp!=0)
		{
				n=temp%10;
				fact=1;
				for(i=1;i<=n;i++)
					fact=fact*i;
				sum=sum+fact;
				temp=temp/10;
		}
		if(x==sum)
			printf("\n%d",x);
	}
	return 0;

}
