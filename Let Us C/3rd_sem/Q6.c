#include<stdio.h>
#include<conio.h>
int main()
{
    float n1,n2,result;
    printf("Enter the two decimal number :\n");
    scanf("%f%f",&n1,&n2);
    result=n1*n2;
    printf("\n==========================\n");
    printf("The Multiplication result is :%.2f",result);
    getch();
    return 0;
}