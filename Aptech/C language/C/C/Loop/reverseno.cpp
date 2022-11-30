#include<stdio.h>
int main()
{
	int copy,num,digit,reverse=0;
	printf("Enter the number :     ");
	scanf("%d",&num);
	copy=num;
	while(copy!=0)
	{
			digit=copy%10;
			reverse=reverse*10+digit;
			copy/=10;			
			
	}
	printf("Reversed no of %d = %d",num,reverse);
	
	return 0;
}
	
	


