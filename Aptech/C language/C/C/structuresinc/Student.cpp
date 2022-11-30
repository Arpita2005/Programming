#include<stdio.h>

struct student 
{
     char name[50];   //50*1 + 4 + 4 = 58 + 2 = 60
     int roll;
     float marks; 
};
int main()
{
     struct student s;
     printf("\nSize of struct student =%d",sizeof(s));
     printf("\nEnter information of students:\n\n");
     printf("Enter name: ");
     gets(s.name);// . - membership access operator
     printf("Enter roll number: ");
     scanf("%d",&s.roll);
     printf("Enter marks: ");
     scanf("%f",&s.marks);
     printf("\nDisplaying Information\n");
     printf("Name: %s\n",s.name);
     printf("Roll: %d\n",s.roll);
     printf("Marks: %.2f\n",s.marks);
     return 0;
}

