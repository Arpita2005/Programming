#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,f=1;
	printf("Enter the number: \n");
	scanf("%d",&num);
	for(i=num;i>0;i--)
	f*=i;
	printf("\n The factorial of %d=  %d\n",num,f);
    getch();
	return 0;
}