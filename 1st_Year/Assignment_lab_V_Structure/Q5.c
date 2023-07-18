//Write a program to accept customer details such as: Account_no, Name, Balance using structure. Assume 3 customers in the bank. Write a function to print the account no. and name of each customer whose balance &lt; 100 Rs.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct bank
{
    char name[50];
    long id;
    int balance;
}bk;
int main()
{
    int num;
    printf("Enter customer's number:\n");
    scanf("%d",&num);
    bk b[num];
    for(int i=0;i<num;i++)
    {
        printf("Detail %d\n",i+1);
        printf("Enter %d customer name:\n",i+1);
        fflush(stdin);
        gets(b[i].name);
        printf("Enter your id:\n");
        scanf("%ld",&b[i].id);
        printf("Enter your bank balance:\n");
        scanf("%d",&b[i].balance);
        printf("\n..............................\n");
    }
    for(int i=0;i<num;i++)
    {
        if(b[i].balance<100)
        {
            puts(b[i].name);
            printf("%d",b[i].id);
            printf("\nYour bank balance is less than 100\n");
        }
    }
    getch();
    return 0;
}