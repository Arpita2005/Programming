#include<stdio.h>
#include<conio.h>
void reverse();
int main()
{
	reverse();
    getch();
	return 0;
}
void reverse()
{
	int num,end;
	printf("Reverse function using while \n");
	printf("Enter the start number that will end to 1:  \n");
	scanf("%d",&num);
	
	end=1;
	while(num>end)
	{
		printf("The reverse is: %d \n",num);
		num--;
	}
}