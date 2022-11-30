#include<stdio.h>

struct student 
{
     char name[50],branch[50];   
     int roll;
     float marks_math,marks_physics,marks_comp; 
};
int main()
{
     struct student s;
     float avg;
     printf("\nEnter information of students:\n\n");
     printf("Enter name: ");
     gets(s.name);
     printf("Enter branch: ");
     gets(s.branch);
     printf("Enter roll number: ");
     scanf("%d",&s.roll);
     printf("Enter marks in Math: ");
     scanf("%f",&s.marks_math);
     printf("Enter marks in Physics: ");
     scanf("%f",&s.marks_physics);
     printf("Enter marks in Computer: ");
     scanf("%f",&s.marks_comp);
     printf("\nDisplaying Information\n");
     printf("Name: %s\n",s.name);
     printf("Branch: %s\n",s.branch);
     printf("Roll: %d\n",s.roll);
     avg=(float)(s.marks_math+s.marks_physics+s.marks_comp)/(float)3; 
     printf("Average Marks: %f\n",avg);
     return 0;
}

