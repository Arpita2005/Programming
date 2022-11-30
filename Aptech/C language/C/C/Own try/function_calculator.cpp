#include <stdio.h>
#include <conio.h>
#include <math.h>

// calling functions
float addition(float num1, float num2);
float substraction(float num1, float num2);
float multiplication(float num1, float num2);
float divition(float num1, float num2);
// int reminder(int num1, int num2);
int main()
{
    // Code
    float number_1, number_2, answer;
    char choose;

    while (1)
    {
        /* code */

        // First Number input
        printf("Enter your first Number : \n");
        scanf("%f", &number_1);

        // second number input
        printf("Enter your Second Number : \n");
        scanf("%f", &number_2);

        // Choosing user to which calculation
        printf("What you want to do ? \n");
        printf("Press A for Addition \n");
        printf("Press S for Substraction \n");
        printf("Press M for Multiplication \n");
        printf("Press D for Divition \n");
        // printf("Press R for Reminder \n");

        choose = getche();
        if (choose == 'A' || choose == 'a')
        { /* Addition */
            // answer = addition(number_1, number_2);
            printf("Your answer is : %.2f\n", addition(number_1, number_2));
        }
        else if (choose == 'S' || choose == 's')
        {
            /*Substraction*/
            printf("Your answer is : %.2f\n", substraction(number_1, number_2));
        }
        else if (choose == 'M' || choose == 'm')
        {
            /* Multiplication */
            printf("Your answer is : %.2f\n", multiplication(number_1, number_2));
        }
        else if (choose == 'D' || choose == 'd')
        {
            /* Divition */
            printf("Your answer is : %.2f\n", divition(number_1, number_2));
        }
        // else if (choose == 'R' || choose == 'r')
        // {
        //     /* Reminder */
        //     printf("Your answer is : %.2f", reminder(number_1, number_2));
        // }
        else if (choose == 'e' || choose == 'E')
        {
            /* code */
            exit(0);
        }

        else
        {
            printf("Sorry you have entered %c something wrong \n", choose);
        }
    }

    // printf("\n Your answer is : %.2f", answer);

    getch();
    return 0;
}

// Declating Addition
float addition(float num1, float num2)
{
    return num1 + num2;
}

// Declaring Substraction
float substraction(float num1, float num2)
{
    return num1 - num2;
}

// Declaring multiplication
float multiplication(float num1, float num2)
{
    return num1 * num2;
}

// Declaring divition
float divition(float num1, float num2)
{
    return num1 / num2;
}

// Declaring reminder
// int reminder(int num1, int num2)
// {
//     return num1 % num2;
// }