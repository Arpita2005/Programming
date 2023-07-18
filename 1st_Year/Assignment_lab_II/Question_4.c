#include <stdio.h>
#include <conio.h>
int main()
{
    int arr1[100], arr2[100];
    int i, n;

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }
    /* Copy elements of first array into second array.*/
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    /* Prints the elements of first array   */
    printf("\nThe elements stored in the first array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", arr1[i]);
    }

    /* Prints the elements copied into the second array. */
    printf("\n\nThe elements copied into the second array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", arr2[i]);
    }
    getch();
    return 0;
}
