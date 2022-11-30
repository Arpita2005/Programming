#include<stdio.h>
#include<conio.h>
int main()
{
      long int basic_salary,hra,da,gross_salary;
    
    printf("According to the 1st person\n");
     printf("Enter the basic salary(<=10000): \n");
     scanf("%d",&basic_salary);

     hra=(basic_salary*20/100);
     printf("The hra is: %d \n",hra);

     da=(basic_salary*80)/100;
     printf("The da is: %d\n",da);

     gross_salary=(basic_salary+hra+da);
     printf("The gross salary is: %d \n",gross_salary);
    
    printf("============================\n");

    printf("According to the 2nd person\n");
     printf("Enter the basic salary(<=20000): \n");
     scanf("%d",&basic_salary);

     hra=(basic_salary*25)/100;
     printf("The hra is: %d \n",hra);

     da=(basic_salary*90)/100;
     printf("The da is: %d\n",da);

     gross_salary=(basic_salary+hra+da);
     printf("The gross salary is: %d \n",gross_salary);

    printf("==========================\n");

     printf("According to the 3rd person\n");
     printf("Enter the basic salary(>20000): \n");
     scanf("%d",&basic_salary);

     hra=(basic_salary*30)/100;
     printf("The hra is: %d \n",hra);

     da=(basic_salary*95)/100;
     printf("The da is: %d\n",da);

     gross_salary=(basic_salary+hra+da);
     printf("The gross salary is: %d \n",gross_salary);

getche();
return 0;

}