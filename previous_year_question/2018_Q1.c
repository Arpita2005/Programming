//In an organization 55% of basic salary is given as DA while HRA is 15% of basic salary.PF is deducted at the rate of 12.5% of gross salary.WAP to calculate net salary.[Net Salary: Gross salary-PG][Gross Salary:Basic+DA+HRA]
#include<stdio.h>
#include<conio.h>
int main()
{
    int salary,DA,HRA,PF;
    float gross_salary,net_salary;
    printf("Enter the amount of basic salary:\n");
    scanf("%d",&salary);
    printf("\n=========================\n");
    DA=salary*55/100;
    printf("The DA is:%d",DA);
    HRA=salary*15/100;
    printf("\nThe HRA is:%d",HRA);
    gross_salary=HRA+DA+salary;
    printf("\nThe Gross Salary is:%.3f",gross_salary);
    net_salary=gross_salary-12.5/100;
    printf("\nThe Net Salary is:%.3f",net_salary);
    getch();
    return 0;
}