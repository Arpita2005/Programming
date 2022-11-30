#include<stdio.h>
int main()
{
	// Buzz no is the number divisible by 7 or last digit is 7
	int number;
	printf("\n Input a number:  ");
	scanf("%d",&number);
	if(number%7==0 || number%10==7)
	    printf("\n%d is called buzz number",number);
	else
	    printf("\n%d is not buzz number",number);
	
	return 0;
}
