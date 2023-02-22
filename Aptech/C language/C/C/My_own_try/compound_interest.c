//A certain sum is invested at the rate of 10% per annum for 3 years. WAP to find and display the difference between CI and SI to find the and display the difference between SI Aand CI. Take a sum as an input 
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    float sum,x,r,t,CI,SI,a,b,sub;
    printf("Enter A Certain Sum :\n");
    scanf("%f",&sum);
    printf("Enter the interest value : (Give the value in decimal)\n");
    scanf("%f",&r);
    printf("Enter the Time : (In Decimal) \n");
    scanf("%f",&t);
    printf("\n.......................\n");
    x=sum*r*t;  //p*r*t
    b=r/100;   //R/100
    SI=x/100;  //p*r*t/100
    printf("The Simple Interest is :%.4f\n ",SI);
    a=sum*(pow((1+b),t));  //p*(1+r/100)t
    CI=a-sum;   //A-P
    printf("The Compound Interest is : %.4f\n",CI);
    sub=(SI-CI);
    printf(" || The Subtraction Result is :%.4f ||\n ",sub);
    getch();
    return 0;
}