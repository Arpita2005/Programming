//The Equation is :: a4*x4+a3*x3 +a2*x2+a1*x1+a0*x0

#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    float a,x,multiplication=0.0,result=0.0;
    printf("Enter The value of a and x --\n");
    scanf("%f%f",&a,&x);
    for(int i=0;i<=4;i++)
    {
        multiplication=pow(a,i)*pow(x,i);
        result+=multiplication;
    }
    printf("The Result is : %.3f",result);
    getch();
    return 0;
}