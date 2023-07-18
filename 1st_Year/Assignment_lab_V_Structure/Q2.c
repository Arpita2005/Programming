//Write C program to read the details of two workers and calculate total payment of workers using structure.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct det
{
    char name[30];
    long salary;
}c;
int main()
{
    int num;
    long total_salary=0;
    printf("Enter the number of workers:\n");
    scanf("%d",&num);
    printf("\n========================\n");
    c s[num];
    for(int i=0;i<num;i++)
    {
        printf("Enter %d worker name:",i+1);
        fflush(stdin);
        gets(s[i].name);
        printf("Enter %d worker salary:",i+1);
        scanf("%ld",&s[i].salary);
        printf("\n.........................\n");
    }
     for(int i=0;i<num;i++)
     {
        total_salary=total_salary+s[i].salary;
     }
        printf("The Total amount of %d workers are:%ld",num,total_salary);
     getch();
     return 0;
}