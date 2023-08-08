//Write a C-program to create student structure having field roll_no, stud_name, class. Pass this entire structure to function and display the structure elements.
#include<stdio.h>
#include<conio.h>
typedef struct  det
{
    char name[50];
    int roll;
    char class[10];
}s;
void show()
{
    int num;
    printf("Enter the number of students:\n");
    scanf("%d",&num);
    s nm[num];
    for(int i=0;i<num;i++)
    {
    printf("Enter your name:\n");
    fflush(stdin);
    gets(nm[i].name);
    printf("Enter your roll:\n");
    scanf("%d",&nm[i].roll);
    printf("Enter your class:\n");
    fflush(stdin);
    gets(nm[i].class);
    printf("\n==========================\n");
    }
    for(int i=0;i<num;i++)
    {
        printf("Your name is:");
        puts(nm[i].name);
        printf("\nYour Roll is:%d\n",nm[i].roll);
        printf("Your class is:");
        puts(nm[i].class);
        printf("\n...........................\n");
    }
}
int main()
{
    show();
    getch();
    return 0;
}
