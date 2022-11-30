#include<stdio.h>
// Smallest element display
int main()
{
	int array[5];
	int i,smallest;
	printf("\nEnter 5 elements: \n");
	for(i=0;i<5;i++)
	    scanf("%d",&array[i]);
	printf("\nPrint the array:   \n");
	for(i=0;i<5;i++)
	    printf("%4d",array[i]);
	smallest=array[0];
	for(i=1;i<5;i++)
	{
		if(array[i]<=smallest)
		    smallest=array[i];
	}
	printf("\nSmalest=%2d",smallest);
	
	return 0;	
	
}
