#include <stdio.h>
#include <conio.h>
// No arguments passed and no return Value
void checkPrimeNumber();

int main()
{
    checkPrimeNumber(); // no argument is passed to prime()
    printf(" \n Press enter to exit !");
    getch();
    return 0;
}

// return type of the function is void because no value is returned from the function
void checkPrimeNumber()
{
    int n, i, flag = 0;
    printf("Prime number or Not => \n");
    printf("Enter a integer Number : ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
}
