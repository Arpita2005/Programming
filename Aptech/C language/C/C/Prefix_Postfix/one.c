/// Let's print some Postfix and prefix Increment and Decrement
#include <stdio.h>
//#include <conio.h>

int main()
{
    // Let's get some variables
    int a, b, c, aa = 0, bb = 0, inp;
    char decide;

    do
    {
        // Getting decetion to start Increment Or Decrement
        printf("Enter '1' to Enter calculation mode \nEnter '0' To understand Increment or Decrement \n");
        scanf("%d", &inp);
        if (inp == 1)
        {
            /* Calculation Mode */
            printf("You have entered Calculation Mode \n\n");
            printf("\n Enter '0' to start Increment \n Enter '1' to Start decrement \n");
            scanf("%d", &inp);

            if (inp == 0)
            {
                // Postfix
                printf(" You are in Increment Calculation : \n");
                printf("Enter two numbers to get Postfix and Prefix : \n");
                scanf("%d  %d", &a, &b);
                aa = a;
                bb = b;

                // Now making some program to print the prefix and postfix
                c = a++;
                c = ++b;

                printf("\n First number %d postfix A++ : %d \n ", aa, a);
                printf("\n Secound number %d pretfix ++B : %d \n ", bb, b);

                printf("\n One more time calculating Postfix and Prefix : \n");
                printf("\n Entered First number %d postfix A++ : %d \n ", aa, a);
                printf("\n Entered Secound number %d pretfix ++B : %d \n ", bb, b);

                // Calculation between postfix and prefix
                c = a++ + ++b;
                printf("Calculation of A %d + B %d:", a, b);
                printf("\n You have entered A=%d and B=%d \n\n So the answer of C is : %d \n", aa, bb, c);
                printf(" \nThe value has been change because of Increment Operator ");
            }
            else if (inp == 1)
            {
                // Decrement
                printf(" You are in Decrement Calculation : \n");
                printf("Enter two numbers to get Postfix and Prefix : \n");
                scanf("%d  %d", &a, &b);
                aa = a;
                bb = b;

                // Now making some program to print the prefix and postfix
                c = a--;
                c = --b;

                printf("\n First number %d postfix A-- : %d \n ", aa, a);
                printf("\n Secound number %d pretfix --B : %d \n ", bb, b);

                printf("\n One more time calculating Postfix and Prefix : \n");
                printf("\n Entered First number %d postfix A-- : %d \n ", aa, a);
                printf("\n Entered Secound number %d pretfix --B : %d \n ", bb, b);

                // Calculation between postfix and prefix
                c = a-- + --b;
                printf("Calculation of A %d + B %d:", a, b);
                printf("\n You have entered A=%d and B=%d \n\n So the answer of C is : %d \n", aa, bb, c);
                printf(" \nThe value has been change because of Increment Operator \n");
            }
        }
        else if (inp == 1)
        {
            /* Understand what is increment or decrement*/
            printf("You have entered Understand mode");
            printf("Enter 1 to Understand Increment \n Enter 0 to Understand Decrement\n");
            scanf("%d", &inp);
            if (inp == 1)
            {
                /* Increment*/
                printf("You have choosed Increment");
            }
            else if (inp == 0)
            {
                /* Decrement */
                printf("You have choosed Decrement");
            }
        }
        printf("\n Do you want to repeat ? \n");
        printf("\n Press Y for yes and N for no : \n");
        scanf("%c", &decide);
        decide = ((decide != 'n' && decide != 'N'));
       // decide = ((decide != 'n' || decide != 'N'));

    } while (decide);

    return 0;
}
