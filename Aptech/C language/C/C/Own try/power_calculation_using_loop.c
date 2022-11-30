#include <stdio.h>

int main()
{

    int a, number, result = 1, i = 0;
    printf("Power calculation using user input \n");
    printf("Enter a number : ");
    scanf("%d", &number);
    printf("Enter the power number : ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        result *= number;
    }

    printf("%d to the power of %d is = %d\n", number, a, result);

    return 0;
}
