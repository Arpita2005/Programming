#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct person
{
    char name[60];
    int salary;
    char doj[30];
}s;
int main()
{
    int num;
    printf("Enter how much person's details you want to entry\n");
    scanf("%d",&num);
    s sd[num];
    for(int i=0;i<num;i++)
    {
        printf("Details of %d person :\n",i+1);
        printf("Enter your name:\n");
        fflush(stdin);;
        gets(sd[i].name);
        printf("Enter your Date of Joining :\n");
        fflush(stdin);
        gets(sd[i].doj);
        printf("Enter Your salary :\n");
        scanf("%d",&sd[i].salary);
    }
    for(int i=0;i<num;i++)
    {
        printf("\nName is: %s",sd[i].name);
        printf("\nDate of Joining: %s",sd[i].doj);
        printf("\nSalary is: %d",sd[i].salary);
        printf("\n+============================+\n");
    }
    getch();
    return 0;
}