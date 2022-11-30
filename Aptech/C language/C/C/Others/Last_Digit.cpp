#include<stdio.h>
//  Show last digit of a given number
int main() {
	int num,last_digit;
	printf("\n Input a number:  ");
	scanf("%d",&num);
	last_digit=num/10; // X
	printf("\n The last digit of the number = %d ",last_digit);

	return 0;
}
/*
X
	10| 565  | 56
		50
		===
		 65
		 60
		 ==
		 5 (Ans.)
*/

