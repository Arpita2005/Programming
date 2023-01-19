#include <stdio.h>
#include<conio.h>
// Area and perimeter of a circle
int main()
{
    float radius,a,perimeter,b,area;
    printf("The radius is: ");
    scanf("%f",&radius);
    
    a=3.14;
    area=a*radius*radius;

     b=2;
    perimeter=b*a*radius;
    printf("The perimeter is: %f  \n",perimeter);
    
    printf("The area is: %f",area);
    getch();
    return 0;
}