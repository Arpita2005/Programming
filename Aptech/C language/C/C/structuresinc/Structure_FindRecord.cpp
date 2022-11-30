#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct student_details
{
	char name[50];
	int roll;
	int marks;
	char grade;
} Student;
int main()
{
	Student s[10];
	int i, j, k, n, flag = 0, search;

	printf("\n Enter the no of students:  ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		// s[i].roll=i+1;
		// printf("\n For Roll Number %d",s[i].roll);
		k = i + 1;
		printf("\n For Student %d\n", k);
		printf("\n Enter the student name :  ");
		fflush(stdin);
		gets(s[i].name);
		printf("\n Enter the student roll :  ");
		scanf("%d", &s[i].roll);
		printf("\n Enter the student marks :  ");
		scanf("%d", &s[i].marks);
		printf("\n Enter the student grade :  ");
		fflush(stdin);
		scanf("%c", &s[i].grade);
	}
	printf("\n Display the information of students:  ");
	for (i = 0; i < n; i++)
	{
		// s[i].roll=i+1;
		// printf("\n For Roll Number %d",s[i].roll);
		k = i + 1;
		printf("\n\nStudent %d\n==============\n", k);
		printf("\n Name :  %s", s[i].name);
		printf("\t Roll :  ");
		printf("%d", s[i].roll);
		printf("\t Marks :  ");
		printf("%d", s[i].marks);
		printf("\t Grade :  ");
		printf("%c", s[i].grade);
	}
	printf("\n\nEnter the student roll to find :  ");
	scanf("%d", &search);
	for (i = 0; i < n; i++)
	{
		if (s[i].roll == search)
		{
			j = i;
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("\n\nStudent Record\n======================\n");
		printf("\n Name :  %s", s[j].name);
		printf("\t Roll :  ");
		printf("%d", s[j].roll);
		printf("\t Marks :  ");
		printf("%d", s[j].marks);
		printf("\t Grade :  ");
		printf("%c", s[j].grade);
	}
	else
		printf("\n Record Not Found ");

	getch();
	return 0;
}
