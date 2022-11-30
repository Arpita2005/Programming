#include<stdio.h>
int main()
{
    // Input a nunber and display the number is divisible by 2 or 3 or
	// both or none  
	int num;
	printf("\n Input anumber:  ");
	scanf("%d",&num);
	if(num%2==0 && num%3!=0)
		printf("\n %d is only divisible by 2",num);
	else if(num%2!=0 && num%3==0)
	    printf("\n %d is only divisible by 3",num);
	else if(num%2==0 && num%3==0)
	    printf("\n %d is divisible by both 2 and 3",num);
	else
	    printf("\n %d is divisible by none of 2 or 3",num); 
  
    return 0;
}
  

