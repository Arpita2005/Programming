#include<stdio.h>
#include<math.h>
  // Count digits in the integer part of a number 
int main()
{
	float no;
	int num,count=0;
	printf("\n Enter the float number:   ");
	scanf("%f",&no);
	num=(int)(floor(no));
	while(num!=0)
	{
		num/=10; // num=num/10
		count++;
	}
	printf("\n The no of digits in the integer part=%d",count);	
	
	return 0;
}
