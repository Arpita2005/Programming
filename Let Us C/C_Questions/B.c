//Write a  program in C to read two numbers and find the greater nunmber and if both of them are equal then print EQUAL 
#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,max=0;
    printf("Entet the two number :\n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        max=num1;
        printf("\nThe Greater number is : %d",num1);
    }
    else if(num2>num1)
    {
        max=num2;
        printf("\nThe Greater Number is : %d",num2);
    }
    else
    {
        printf("\nBoth Are Equal \n");
    }
    getch();
    return 0;
}