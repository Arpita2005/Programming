
//WAP to take an array of floating point numbers and display the decimal portions only from  them.
#include<stdio.h>
int main(){ 
    int b;
    float a;
    printf("Enter a float number :");
    scanf("%f",&a);
    b=a;
    printf("%.2f",a-b);
return 0;
} 
