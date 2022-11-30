#include<stdio.h>
// Reverse the array
int main()
{
	int i,n,array[50];
	printf("\n Input the no of elements:   ");
	scanf("%d",&n);
	printf("\n Input the array elements:   ");
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("\n Print the array elements in reverse order :   ");
	for(i=n-1;i>=0;i--)
		printf("%4d",array[i]);
		
	return 0;
}
