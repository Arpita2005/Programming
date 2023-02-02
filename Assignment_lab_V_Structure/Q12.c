//Write a C program to create a student structure having fields stud_name and address. Accept the details of n students, rearrange the data in alphabetical order of student name and display it.
#include<stdio.h>
#include<conio.h>
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
    fflush(stdin);
    gets(sd[i].name);
    printf("Address is:\n");
    fflush(stdin);
    gets(sd[i].address);  
    printf("\n===============\n"); 
    }
    getch();
    return 0;
}
