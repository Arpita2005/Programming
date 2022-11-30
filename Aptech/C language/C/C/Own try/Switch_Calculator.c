#include <stdio.h>
#include <conio.h>
int main()
{
    // Code
    int num1, num2;
    char decide, operator;

    printf("\t\t\t\tSwitch calculator \n");
    printf("\t\t==========================================================\n");
    printf("\t\t || ==============Chittajit Chakraborty=============== ||\n");
    printf("\t\t==========================================================\n");
    do
    {
        /* code */
        // Getting userinput's
        //Getting First Number
        printf("\n ========================= \n || Enter First Number : ||\n =========================\n");
        scanf("%i", &num1);

        //Getting Second Number
        printf("\n ========================= \n || Enter Second Number : ||\n =========================\n");
        scanf("%i", &num2);

        //Getting Operator
        printf("\n ======================================= \n || Enter Operator(+, -, *, /, ) : ||\n =======================================\n");
        operator= getche();
        printf("\n=======================================\n");

        // using switch to use Operator to Calculate
        switch (operator)
        {
        case '+': printf("\nAddition of : %i + %i = %i", num1, num2, (num1 + num2)); break; //Addition
        case '-': printf("\nSubtraction of : %i - %i = %i", num1, num2, (num1 - num2)); break; //Subtraction
        case '*':printf("\nMultiplication of : %i * %i = %i", num1, num2, (num1 * num2)); break; //Multiplication
        case '/':printf("\nDivision of : %i / %i = %i", num1, num2, (num1 / num2));break; //Division
        case '%': printf("Reminder of : %i % %i = %i", num1, num2, num1 % num2);break; //Reminder
        default:printf("\nYou have entered a wrong Operator !%c", operator);break; //When user input anything else the it print
        }
        //Decision to stop or Re-Calculate
        printf("\n\n==============================================");
        printf("\n || Press 'Y' to Re-Calculate & 'N' to Stop : || ");
        printf("\n==============================================\n");
        decide = getche();
        //Making 'N' = 'n' Capital N = Smaller n
        while (decide == 'N')
        {
            decide = 'n';
        }
    } while (decide != 'n');
    //Before stoping the program
    printf("You have enterd : %c",decide);
    printf("\nOk Your Calculator has been stoped");
    getch(); //To hold the external terminal

    return 0;
}
