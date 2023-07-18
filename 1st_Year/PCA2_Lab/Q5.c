//WAP to store details of 3 students with name,course,roll_no. using structure
#include<stdio.h>
#include<conio.h>
typedef struct student 
{
    char name[100],course[100];
    int roll;
}d;

int main()
{
    int num;
    printf("How much student details you want to get:\n");
    scanf("%d",&num);
    d det[num];
    for(int i=0;i<num;i++)
    {
        printf("Details %d",i+1);
        printf("\n=================\n");
        printf("\nEnter Name of Student:\n");
        fflush(stdin);
        gets(det[i].name);
        printf("\n.......................\n");
        printf("\nEnter the Roll Of Student:\n");
        scanf("%d",&det[i].roll);
        printf("\n.......................\n");
        printf("\nEnter the Name of Course:\n");
        fflush(stdin);
        gets(det[i].course);
        printf("\n.......................\n");
    }
    for(int i=0;i<num;i++)
    {
        printf("\nDetail of Student :%d\n",i+1);
        printf("Name is: %s\n",det[i].name);
        printf("Roll is:%d\n",det[i].roll);
        printf("Course is:%s\n",det[i].course);
    }
        getch();
        return 0;
}