#include <stdio.h>
#include <conio.h>
int main()
{
    int arr1[100];
    int n, i, j, tmp;

    printf("\n\nsort elements of array in descending order :\n");
    printf("----------------------------------------------\n");

    printf("Input the size of array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr1[i] < arr1[j])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }

    printf("\nElements of array is sorted in descending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n\n");
    getch();
    return 0;
}