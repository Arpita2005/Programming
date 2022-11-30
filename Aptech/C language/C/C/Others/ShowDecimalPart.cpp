#include<stdio.h>
//  Show decimal part of a given floating point number
int main() {
	float num,dec_part;
	int whole_number_part;
	printf("\n Input the number:  ");
	scanf("%f",&num);
	whole_number_part=(int)num;
	dec_part=num-whole_number_part;
	printf("\n The last digit of the number = %.2f ",dec_part);

	return 0;
}
/*
	float a;
	int b;
	printf("\n enter a float number");
	scanf("%f", &a);
	b=a;
	printf("\n Your Decimal number is %.2f",a-b);
*/
/**/
