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






/*#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void gross_salary_user_input();
int main()
{
    gross_salary_user_input();
    getch();
}
void gross_salary_user_input()
{
    int gross_salary, HRA, DA, basic_salary, no_of_person, i = 1;
    printf("Enter Number of person : ");
    scanf("%d", &no_of_person);
    for (i = i; i <= no_of_person; i++)
    {
        
        printf("\n================\n || Person %d ||\n================\n\n", i);
        printf("Enter the Basic Salary : ");
        fflush(stdin);
        scanf("%d", &basic_salary);
        printf("Enter the HRA percentage : ");
        fflush(stdin);
        scanf("%d", &HRA);
        HRA = ((basic_salary * HRA) / 100);
        printf("Enter the DA percentage : ");
        fflush(stdin);
        scanf("%d", &DA);
        DA = ((basic_salary * DA) / 100);
        gross_salary = (basic_salary + HRA + DA);

        printf("\nPerson : %d \n============\n\n The basic salary %d : \n The HRA %d \n The DA : %d \n Gross Salary is : %d \n", i, basic_salary, HRA, DA, gross_salary);
    }
    printf("\nEnd !\n");
}*/