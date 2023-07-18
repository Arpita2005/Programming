//WAP to read marks of 10 student in the range of 0-100.Make 10 groups:- 0-10,10-20,20-3-,30-40...Count the number of values that falles in the group and display the result
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int num,i;
    char name[50];
    for(i=0;i<5;i++)
    {
        
        printf("...........................\n");
        printf("Name of %d student :\n",i+1);
        fflush(stdin);
        gets(name);
        printf("Marks of %d student:\n",i+1);
        fflush(stdin);
        scanf("%d",&num);
        printf("\n+===========================+\n");
        if(num>0&&num<=10)
        {
            printf("\nYour marks is between 0 to 10");
        }
        else if(num>10&&num<=20)
        {
            printf("\nYour marks is between 10 to 20\n");
        }
        else if(num>20&&num<=30)
        {
            printf("\nYour marks is between 20 to 30\n");
        }
        else if(num>30&&num<=40)
        {
            printf("Your marks is between 30 to 40\n");
        }
        else
        {
            printf("Your marks is between 40 t0 100\n");
        }
    }
     getch();
     return 0;
}