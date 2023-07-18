//Write C program to accept the details of employee and display them using structure.Details consist of Employee ID, Name, Designation, Department, Salary.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct details
{
    char name[50];
    long id;
    char designation[50];
    int salary;
}s1;
int main()
{
    int num;
    printf("Enter the number of students:\n");
    scanf("%d",&num);
    s1 ed[num];
    for(int i=0;i<num;i++)
    {
        printf("Details %d\n",i+1);
        printf("==================\n");
        printf("Enter your Name:\n");
        fflush(stdin);
        gets(ed[i].name);
        printf("Enter your Id:\n");
        scanf("%ld",&ed[i].id);
        printf("Enter your designation:\n");
        fflush(stdin);
        gets(ed[i].designation);
        printf("Enter your salary:\n");
        scanf("%d",&ed[i].salary);
    }
    printf("\n\n");
    printf("All the details that you have entered:\n");
    printf("=============================\n");
    for(int i=0;i<num;i++)
    {
        printf("\nDetail number %d",i+1);
        printf("\nYour name is:%c",ed[i].name);
        printf("\nYour Id is:%ld",ed[i].id);
        printf("\nYour designation is:%c",ed[i].designation);
        printf("\nYour salary is:%d",ed[i].salary);
        printf("\n..............................\n");
    }
    getch();
    return 0;
}
