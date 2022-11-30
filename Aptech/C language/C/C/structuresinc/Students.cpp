#include<stdio.h>
/*
 fflush(stdin) in c:
==============
The function fflush(stdin) is used to flush the output buffer of the stream. 
It returns zero, if successful otherwise, returns EOF and feof error indicator is set.
 Here is the syntax of fflush(stdin) in C language, int fflush(FILE *stream);
EOF=End Of File
*/
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student s[10];
    int i;
    printf("Enter information of students:  \n");
    for(i=0;i<3;++i)
    {
        s[i].roll=i+1;
        printf("\nFor roll number %d\n",s[i].roll);
        printf("Enter name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        printf("\n");
    }
    printf("Displaying information of students:\n\n");
    for(i=0;i<3;++i)
    {
	     printf("\nInformation for roll number %d:\n",i+1);
	     printf("Name: ");
	     puts(s[i].name);
	     printf("Marks: %.1f",s[i].marks);
    }
   return 0;
}
