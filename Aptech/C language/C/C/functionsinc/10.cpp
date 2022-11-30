#include <stdio.h>
#include <conio.h>
// No arguments passed but a return value
int getInteger();

int main()
{
    int n, i, flag = 0;

    // no argument is passed to the function
    // the value returned from the function is assigned to n
    n = getInteger();

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);

    printf(" \n Press Enter to exit !");
    getch();
    return 0;
}

// getInteger() function returns integer entered by the user
int getInteger()
{
    int n;
    printf("Prime number or not : \n");
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    return n;
}
