#include<stdio.h>
#include<conio.h>
void calculate_salary_summery();
int main()
{
    calculate_salary_summery();
    getche();
    return 0;
}
void calculate_salary_summery()
{
           int i,n,gross_salary,basic_salary,DA,HRA;
            
            printf("Enter the number of person to show the salary chart: \n");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                if(basic_salary<=100000)
                {   
                    printf("Basic salary is:%d \n",basic_salary);
                    HRA=(basic_salary*20/100);
                    printf("The HRA is:%d \n",&HRA);
                    DA=(basic_salary*80/100);
                    printf("The DA is: %d \n",&DA);
                    gross_salary=(basic_salary+HRA+DA);
                    printf("The gross salary is: %d \n",&gross_salary);
                }
                else if(basic_salary<=20000)
                {
                    printf("Basic salary is:%d \n",basic_salary);
                    HRA=(basic_salary*25/100);
                    printf("The HRA is:%d \n",&HRA);
                    DA=(basic_salary*90/100);
                    printf("The DA is: %d",&DA);
                    gross_salary=(basic_salary+HRA+DA);
                    printf("The gross salary is: %d \n",&gross_salary);
                }
                else(basic_salary>20000);
                {
                    printf("Basic salary is:%d \n ",basic_salary);
                    HRA=(basic_salary*30/100);
                    printf("The HRA is:%d \n",&HRA);
                    DA=(basic_salary*95/100);
                    printf("The DA is: %d \n",&DA);
                    gross_salary=(basic_salary+HRA+DA);
                    printf("The gross salary is: %d \n",&gross_salary);
                }
                }
            }