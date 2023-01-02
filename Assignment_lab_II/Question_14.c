#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100], i, n, pos, num;

    printf("Enter the size of the array :\n");
    scanf("%d", &n);
    /* Reading array */
    printf("Enter numbers:\n");
    for (i = 0; i < n; i++)
    {
        printf("The %d number is =\n", i+1);
        scanf("%d", &a[i]);
    }
    /* Displaying original array */
    printf("Given array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    /* Reading number and position */
    printf("\nEnter number to be inserted:\n");
    scanf("%d", &num);
    printf("Enter position to insert:\n");
    scanf("%d", &pos);
    /* Insertion */
    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = num;

    /* Displaying final array */
    printf("Array after insertion is:\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d\t", a[i]);
    }
    getch();
    return 0;
}