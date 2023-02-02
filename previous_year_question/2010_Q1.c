//Binary To Decimal Number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,k,decimal_number=0,base=1,rem;
    printf("ENTER A BINARY NUMBER:\n");
    scanf("%d",&num);
    k=num;
    while(num>0)
{
    rem=num%10;
    decimal_number = decimal_number + rem * base;
    num=num/10;
    base=base*2;
}
    printf ( " The binary number is %d \t",k);
    printf (" \n The decimal number is %d \t", decimal_number);
getch();  
return 0;
}