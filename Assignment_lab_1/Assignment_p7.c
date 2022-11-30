#include <stdio.h>
#include<conio.h>
int main()
{
  float angle_1,angle_2,angle_3,total_value,real_value;
   
   printf("The value of angle_1 is: ");
   scanf("%f",&angle_1);
   printf("The value of angle_2 is: ");
   scanf("%f",&angle_2);
   printf("The value of angle_3 is: ");
   scanf("%f",&angle_3);
   
   total_value=angle_1+angle_2+angle_3;
   printf("The total value is: %f \n",total_value);
   
   real_value=180;
   if(total_value==real_value)
   printf("It is a valid triangle \n");
   else
   printf("It is not a valid triangle \n");
   getch();
   return 0;
}