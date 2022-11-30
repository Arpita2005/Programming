#include <stdio.h>
#include <conio.h>
int main()
{

	// Two initiger variable
	int num1, num2;
	// Three charecter variable
	char sign, choose, restart, res;

	do
	{
		printf("\n====================================================\n");
		printf("Enter 1 to Enter two numbers then enter sign \n");
		printf("====================================================\n");
		printf("Enter 0 to Enter  first number then enter sign then secound number");
		printf("\n====================================================\n");

		// Choosing 1 or 0 to select mode with choose variable
		choose = getche();

		if (choose == '1')
		{
			// Code for Enter two number respectivly then enter sign
			printf("\nEnter two numbers :\n");
			scanf("%d %d", &num1, &num2); // Enter two numbers
			printf("Enter sign(+, -, *, /, %) :");
			sign = getche(); // Enter sign
			switch (sign)
			{ // Switching sign
			  // Addition
			case '+':
				printf("\nYour %d + %d answer is %d\n", num1, num2, num1 + num2);
				break;

				// Substraction
			case '-':
				printf("\nYour %d - %d answer is %d\n", num1, num2, num1 - num2);
				break;

				// Divition
			case '/':
				printf("\nYour %d / %d answer is %d\n", num1, num2, num1 / num2);
				break;

				// Multiplication
			case '*':
				printf("\nYour %d * %d answer is %d\n", num1, num2, num1 * num2);
				break;

				// Reminder
			case '%':
				printf("\nYour %d % %d answer is %d\n", num1, num2, num1 % num2);
				break;

				// If nothing will work then print it
			default:
				printf("\nSorry you have enterd a invalid number or sign ( %c )", sign);
				break;
			}
		}
		else if (choose == '0')
		{
			// Code for Enter first number then enter sign then sign

			printf("\nEnter First number :\n");
			scanf("%d", &num1); // Enter first number
			printf("Enter sign(+, -, *, /, %) :");

			sign = getche(); // Enter sign
			printf("\nEnter Secound number :\n");
			scanf("%d", &num2); // Enter secound number
			switch (sign)
			{ // switching case with sign
			  // Addition
			case '+':
				printf("\nYour %d + %d answer is %d\n", num1, num2, num1 + num2);
				break;

				// Substraction
			case '-':
				printf("\nYour %d - %d answer is %d\n", num1, num2, num1 - num2);
				break;

				// Divition
			case '/':
				printf("\nYour %d / %d answer is %d\n", num1, num2, num1 / num2);
				break;

				// Multiplication
			case '*':
				printf("\nYour %d * %d answer is %d\n", num1, num2, num1 * num2);
				break;

				// Reminder
			case '%':
				printf("\nYour %d % %d answer is %d\n", num1, num2, num1 % num2);
				break;

				// If nothing will work then print it
			default:
				printf("\nSorry you have enterd a invalid number or sign ( %c )", sign);
				break;
			}
		}
		else
			// If you didn't choose 1 or 0 then it will show you
			printf("%c It's not acceptalble try again...", choose);
		// restart
		fflush(stdin);
		printf("\n====================================================");
		printf("\n || Do want to restart press Y for yes or N No : || ");
		printf("\n====================================================\n");
		restart = getche();

		if (restart == 'n') // To make a string in upper case
		{
			res = (restart - 32); // restart - 32 = ascii value of n is less than 32 to make N
								  //  It's mean N + 32 = n
		}
		// restart = ((restart != 'N') && (restart != 'n')); // making restart to not get N or n either program will restart
	} while (res != 'N');

	// We can do with this process
	//  while (restart != 'N' && restart != 'n')
	return 0;
}
/*
	why its not working ?
=========================================
 restart = ((restart != 'N') || (restart != 'n'));

 */
