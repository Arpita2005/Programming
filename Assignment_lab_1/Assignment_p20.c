#include<stdio.h>
#include<conio.h>
int main()
{
	int result,i,n,n2,n3;
	printf("The value of n is: \n");
	scanf("%d",&n);
	n2=0;
	n3=1;
	printf("The finonacci series is: %2d %2d ",n2,n3);
	for(i=0;i<n-2;i++)
	{
	   if(n>0)
	   {
	   	result=n2+n3;
	   	n2=n3;
	   	n3=result;
	   	printf("%2d \n",result);
	   }
	   	
	}
	getch();
	return 0;
	}