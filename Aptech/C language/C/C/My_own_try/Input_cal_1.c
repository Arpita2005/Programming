#include<stdio.h>
#include<conio.h>
void num_op_num();
void main()
{
    num_op_num();
}
//Enter first number then enter operator then enter second number
void num_op_num()
{
    char input;
    int num1,num2,ans;

    //Getting user iputs Number 1
    printf("Enter First number \n");
    scanf("%d",&num1);
    
    //Getting operator
    printf("Enter Operator Addition(+), Substraction(-), Multiplication(*),  Division(/) \n");
    input=getche();
    //Getting user iputs Number 2
    printf("Enter Second number \n");
    scanf("%d",&num2);

    //Making decesion to add,substrac,multiplication,division
    switch(input)
    {
        //addition
        case '+' :
        {
            printf("Addition \n");
            ans=(num1+num2);
            printf("Sum of %d and %d is:%d",num1,num2,ans);
            break;
        }
        // Subtraction
       case '-':
       {
            printf("Subtraction\n");
            ans=(num1-num2);
            printf("Subtraction of %d and %d is: %d",num1,num2,ans);
            break;
       }
       //Multiplication
       case '*':
       {
            printf("Multiplication\n");
            ans=(num1*num2);
            printf("Multiplication of %d and %d is: %d",num1,num2,ans);
            break;
       }
    //    Division
       case'/':
       {
            printf("Division\n");
        ans=(num1/num2);
        printf("Division of %d and %d is: %d",num1,num2,ans);
        break;
       }
       //If nothing will work
       default:
       {
        printf("Sorry there is no option of you choice\n");
        break;
       }
    }
    
    getch();
}
