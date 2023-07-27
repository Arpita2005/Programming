#include <stdio.h>
#include <conio.h>

int main()
{
    int  i, n, min, max;

    printf("Enter size of the array : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter elements in array %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    min = max = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    printf("Minimum of array is : %d", min);
    printf("\nMaximum of array is : %d", max);

    getch();
    return 0;
}