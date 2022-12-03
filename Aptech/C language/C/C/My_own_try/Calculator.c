#include<stdio.h>
#include<conio.h>
void calculator();
int main()
{
        calculator();
        getch();
        return 0;
}
void addition()
 {
     printf("Addition\n");
        int num1,num2,result;
        printf("Enter the First Number:\n");
        scanf("%d",&num1);
        printf("Enter the Second Number:\n");
        scanf("%d",&num2);
        result=num1+num2;
        printf("The result is:%d\n",result);
 }
 void subtraction()
 {
        printf("Multiplication\n");
        int num1,num2,result;
        printf("Enter the First Number:\n");
        scanf("%d",&num1);
        printf("Enter the Second Number:\n");
        scanf("%d",&num2);
        result=num1*num2;
        printf("The result is:%d\n",result);
 }
 void multiplication()
 {
     printf("Multiplication\n");
        int num1,num2,result;
        printf("Enter the First Number:\n");
        scanf("%d",&num1);
        printf("Enter the Second Number:\n");
        scanf("%d",&num2);
        result=num1*num2;
        printf("The result is:%d\n",result);
 }
 void division()
 {
     printf("Division\n");
        int num1,num2,result;
        printf("Enter the First Number:\n");
        scanf("%d",&num1);
        printf("Enter the Second Number:\n");
        scanf("%d",&num2);
        result=num1/num2;
        printf("The result is:%d\n",result);
 }
 void modulation()
 {
    printf("Modulation\n");
        int num1,num2,result;
        printf("Enter the First Number:\n");
        scanf("%d",&num1);
        printf("Enter the Second Number:\n");
        scanf("%d",&num2);
        result=num1%num2;
        printf("The result is:%d\n",result);
 }
 void calculator()
{
    int decide;
    printf("My first Calculator in C:\n");
    printf("Enter What do you want to do ?\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulation\n");
    printf("===============================\n");
    scanf("%d",&decide);
    if(decide==1)
    {
        addition();
    }
    else if(decide==2)
    {
         subtraction();
    }
    else if(decide==3)
    {
        multiplication();
    }
    else if(decide==4)
    {
        division();
    }
    else if(decide==5)
    {
        modulation();
    }
    else
    {
        printf("Sorry you have wrong information\n");
    }
}