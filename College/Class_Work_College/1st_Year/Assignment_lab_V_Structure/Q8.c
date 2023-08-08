//Write a  Program to create a structure of student having fields roll_no, stud_name, mark1, mark2, mark3. Calculate total marks and average marks. Arrange the records in descending order of marks.
#include<stdio.h>
#include<conio.h>
typedef struct det
{
    char name[100];
    int roll,marks1,mark2,mark3,total,avaerage;
}s;
int main()
{
    int num,i,total,avaerage,j,match=0;
    char temp[100];
    printf("Enter how many student's number you want:\n");
    scanf("%d",&num);
    printf("\n+=================+\n");
    s r[num];
    for(i=0;i<num;i++)
    {
        printf("Enter student's name:\n");
        fflush(stdin);
        gets(r[i].name);
        printf("Enter student's roll:\n");
        scanf("%d",&r[i].roll);
        printf("Enter first marks:\n");
        scanf("%d",&r[i].marks1);
        printf("Enter second marks:\n");
        scanf("%d",&r[i].mark2);
        printf("Enter third marks:\n");
        scanf("%d",&r[i].mark3);
        printf("\n-============================-\n");
        r[i].total=r[i].marks1+r[i].mark2+r[i].mark3;
        printf("The Total is:%d\n",r[i].total);
        r[i].avaerage=r[i].total/3;
        printf("The Average is:%d\n",r[i].avaerage);
        printf("\n===============================\n");
    }
    printf("Details arranged in desending order:\n");
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(r[i].total<r[j].total)
            {
                match=r[i].total;
                r[i].total=r[j].total;
                r[j].total=match;
                for(int g=0;r[i].name[g]!='\0';g++)
                    temp[g]=r[i].name[g];
                for(int g=0;r[i].name[g]!='\0';g++)
                    r[i].name[g]=r[j].name[g];
                for(int g=0;r[i].name[g]!='\0';g++)
                    r[j].name[g]=temp[g];
                match=r[i].roll;
                r[i].roll=r[j].roll;
                r[j].roll=match;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        printf("Name is:%s\n",r[i].name);
        printf("Roll is:%d\n",r[i].roll);
        printf("Total is:%d\n",r[i].total);
    }
    getch();
    return 0;
}