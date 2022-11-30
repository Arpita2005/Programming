#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
	    printf("\n i=%d",i);
	i=1;
	printf("\n================\n");
	while(i<=10)
	{
		printf("\n %d",i++);
	}
	printf("\n================\n");
	i=10;
	do
	{
		printf("\n %d",i++);
	}
	while(i<=1);
	return 0;
}
