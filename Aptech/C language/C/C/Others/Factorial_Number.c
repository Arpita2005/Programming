#include <stdio.h>
int main()
{
    int number, i, fact = 1;
    printf("Enter a number to get factorial : ");
    scanf("%d", &number);

    for (i = number; i >= 1; i--)
    {
        fact*=i;
    }
    printf("You factorial number of %d is %d",number,fact);

    return 0;
}