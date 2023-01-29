//Write a C program to create a student structure having fields stud_name and address. Accept the details of n students, rearrange the data in alphabetical order of student name and display it.
#include<stdio.h>
#include<cono.h>
typedef struct q
{
    char name[100],address[100];
}Q;
int main()
{
    int num,i;
    printf("Enter Student's Number:\n");
    scanf("%d",&num);
    Q sd[num];
    for(i=0;i<num;i++)
    {
    printf("Name is:\n");
    gets(sd[i].name);
    printf("Address is:\n");
    gets(sd[i].address);   
    }
    getch();
    return 0;
}
