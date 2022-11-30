#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, flag = 0;
    printf("Enter a No.");
    scanf("%d", &n);

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
    getch();
    return 0;
}
