#include <stdio.h>
int main()
{
    // To get user Input in num variable 
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Building logic to get even if 0=even and else 1 = odd
    // Using Reminder
    if (num % 2 == 0)
        printf("%d is an even number", num);
    else
        printf("%d is an odd number", num);

    return 0;
}