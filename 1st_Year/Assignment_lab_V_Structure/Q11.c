//11. Write a menu driven program in C to create a structure employee having fields empid,empname, salary. Accept the details of n Employees from user and perform the following operations using function. - 
// Search by Emp-Id
// - Display All
// - Display Names of Employee having Salary > 10000.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct emp
{
    double id;
    char name[100];
    int salary;
}s;
int main()
{
    int num,i,select;
    printf("How much employee's details you want to store:\n");
    scanf("%d",&num);
    s em[num];
    for(i=0;i<num;i++)
    {
        printf("Employee number %d details\n",i+1);
        printf("Enter Employee Name:\n");
        fflush(stdin);
        gets(em[i].name);
        printf("\nEnter Employee Id:\n");
        scanf("%ld",&em[i].id);
        printf("Enter Employee Salary:\n");
        scanf("%d",&em[i].salary);
        printf("\n-====================-\n");
    }
    while(1)
    {
        printf("In Which way you want to check details?\n1. Search By Emp -Id\n2.Display All\n3.Display Names of Employee having Salary > 10000.\n");
        scanf("%d",select);
        if (select==1)
        {
            double match;
            printf("\nChecking with emp id\n");
            printf("Enter the emp id:\n");
            scanf("%ld",&match);
            for(i=0;i<num;i++)
            {
                if(match==em[i].id)
                {
                    printf("Name:%s",em[i].name);
                    printf("Salary is:%d",em[i].salary);
                    printf("\n+++++++++++++++++++\n");
                }
            }
        }
        else if(select==2)
        {
            printf("Display all\n");
            for(i=0;i<num;i++)
            {
                printf("The name of Employee is:%s",em[i].name);
                printf("The id of employee is:%ld",em[i].id);
                printf("The salary of the employee is:%d",em[i].salary);
                printf("\n+============+\n");
            }
        }
        else if(select==3)
        {
            printf("Display name of employee that have salary above 10000\n");
            for(i=0;i<num;i++)
            {
                printf("Name is:%s",em[i].name);
                printf("\n.........................\n");
            }
        }
        else
        {
            printf("Sorry you have entered wrong option\nTry Next Time\n");
            exit(1);
        }
    }
}