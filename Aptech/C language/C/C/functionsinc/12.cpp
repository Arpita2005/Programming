#include <stdio.h>
#include <conio.h>
// Argument passed and a return value
int checkPrimeNumber(int n);

int main()
{
    int n, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // n is passed to the checkPrimeNumber() function
    // the value returned from the function is assigned to flag variable
    flag = checkPrimeNumber(n);

    if (flag == 1)
        printf("%d is not a prime number", n);
    else
        printf("%d is a prime number", n);

    getch();
    return 0;
}

// integer is returned from the function
int checkPrimeNumber(int n)
{
    /* Integer value is returned from function checkPrimeNumber() */
    int i;

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
            return 1;
    }

    return 0;
}
