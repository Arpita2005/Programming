#include <stdio.h>
#include <conio.h>
#include <string.h>
void declaration();
void decide();
struct structure_try
{
    /* data */
    char name[40];
    int age;
    float height;
    struct joining_details
    {
        /* data */
        int date, hour, minute;
        struct salary_details
        {
            /* data */
            int salary;
        } salary_details;

    } joining_details; // variable name

} basic_details; // variable name
int main()
{
    // Code
    declaration();

    getch();
    return 0;
}

void declaration()
{
    printf("Enter Employee name : ");
    gets(basic_details.name);
    printf("Enter your age : ");
    scanf("%d", &basic_details.age);
    printf("Enter your height (in meter): ");
    scanf("%f", &basic_details.height);
    printf("Enter Employee joining date (Don't give / just enter format 00**####):");
    scanf("%d", &basic_details.joining_details.date);
    printf("Enter Employee joining hour (in 24 hour format) :");
    scanf("%d", &basic_details.joining_details.hour);
    printf("Enter Employee joining minute :");
    scanf("%d", &basic_details.joining_details.minute);
    printf("Enter Employee joining salary (Don't use comma ',') :");
    scanf("%d", &basic_details.joining_details.salary_details.salary);

    // Confirmation of successfully stored everything
    // getting user input to give output

    decide();
}
void decide()
{
    int decesion = 0;
    do
    {
        /* code */
        int decide = 0;
        printf("\n\nDo you want to show the employee detail? \n\n Press 0 to no and 1 to yes...\n");
        scanf("%d", &decide);
        if (decide == 1)
        {
            /* code */
            printf("\nYou have entered %d so here is your employee details \n\n", decide);
            printf("Here is your employee details. \n");
            printf("Employee Name : %s \n", basic_details.name);
            printf("Employee Age : %d \n", basic_details.age);
            printf("Employee Height : %.f \n", basic_details.height);
            printf("Employee joining date : %d \n", basic_details.joining_details.date);
            printf("Employee joining hour : %d \n", basic_details.joining_details.hour);
            printf("Employee joining minute : %d \n", basic_details.joining_details.minute);
            printf("Employee joining Salary : %d \n", basic_details.joining_details.salary_details.salary);
        }
        else if (decide == 0)
        {
            /* code */
            exit(0);
            // return 0;
        }

        else
            printf("Sorry you have entered '%d' You have to choose between 1 and 0 'n", decide);
        printf("\nDo you want to re-show this employee details? \n press 1 to yes or 0 to no : ");
        scanf("%d", &decesion);
    } while (decesion == 1);
    printf("Press any key to exit....");
}
