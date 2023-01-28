//C program to read information of student. It contains Name, Roll number, Birthday, admission date. Calculate age of student at the time of admission.
#include<stdio.h>
#include<conio.h>
typedef struct age
{
    char name[50];
    int roll,day,month,year1,year2;
}s;
int main()
{
    int num;
    printf("Enter the number of students:");
    scanf("%d",&num);
    s ag[num];

    for(int i=0;i<num;i++)
    {
       printf("Information %d",i+1);
       printf("Enter the name:");
       fflush(stdin);
       gets(ag[i].name);
       printf("Enter the Roll number:\n");
       scanf("%d",&ag[i].roll);
       printf("Ente the date and month of birth:\n");
       scanf("%d%d",&ag[i].day,&ag[i].month);
       printf("Enter the borth Year:\n");
       scanf("%d",&ag[i].year1);
       printf("Enter the year of admission:\n");
       scanf("%d",&ag[i].year2);
       printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    }
     for(int i=0;i<num;i++)
     {
        printf("%d name is:%c",ag[i].name);
        printf("Your age is:%d",ag[i].year2-ag[i].year1);
        printf("\n====================\n");
     }
     getch();
     return 0;

    }