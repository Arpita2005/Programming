//1. Write a program in C to store elements an array and print it.
#include <stdio.h>
#include<conio.h>
int main()
{
	int input=0, i=1;
	int arr[input];
	printf("Enter the number of elements of array : ");
	scanf("%d",&input);
	// int arr[input];
	for(i=1;i<=input;i++)
	{
		printf("Enter your %d element : ",i);
		scanf("%d",&arr[i]);
	}
	 for(i=1;i<=input;i++)
	 {
	 	printf("Your %d elemtnt is %d \n",i,arr[i]);
	 }
	getch();
	return 0;
}
