#include <stdio.h>
int main()
{
    int i, n, sum;
    printf("\n Enter a odd number : ");
    scanf("%d", &n);
    printf("\n Odd numbers between 1 to %d are: \n", n);
    for (i = 1; i <= n; i += 2)
    {
        printf("%d ", i);
        sum += i;
    }
    printf(" \n Sum of odd numbers : %d", sum);
    return 0;
}