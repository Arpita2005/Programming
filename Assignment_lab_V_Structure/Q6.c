//Write a C program to accept details of &#39;n&#39; employee (eno, ename, salary) and display the details of employee having highest salary. Use array of structure.
#include<stdio.h>
#include<conio.h>
typedef struct det
{
    char name[30];
    double emp_id;
    int emp_salary;
}d;
int main()
{
    int num,temp=0,y;
    printf("Enter the number of employee:\n");
    scanf("%d",&num);
    d dk[num];
    for(int i=0;i<num;i++)
    {
        printf("Detail %d\n",i+1);
        printf("Enter Name:\n");
        fflush(stdin);
        gets(dk[i].name);
        printf("Enter Id:\n");
        scanf("%ld",&dk[i].emp_id);
        printf("Enter Salary:\n");
        scanf("%d",&dk[i].emp_salary);
    }
    
        for(int i=0;i<num-1;i++)
        {
            for(y=0;y<num-i-1;y++)
            {
                if(dk[y].emp_salary==dk[y+1].emp_salary)
                {
                    temp=dk[y].emp_salary;
                    dk[y].emp_salary=dk[y+1].emp_salary;
                    dk[y+1].emp_salary=temp;
                }
            printf("The highest salary is: %d\n",dk[y+1].emp_salary);
            printf("Detail is:\n");
            puts(dk[y+1].name);
            printf("%d\n",dk[y+1].emp_id);
            }
        }
            
    
    getch();
    return 0;
}