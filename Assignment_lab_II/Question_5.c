#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 100 // Maximum array size pre defined

int main()
{
    int arr[MAX_SIZE];
    int i, j, size, count = 0;

    /* Input size of array */
    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array : \n");
    for (i = 0; i < size; i++)
    {
        printf("Enter elements in array %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find all duplicate elements in array

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            /* If duplicate found then increment count by 1 */
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in array = %d", count);

    getch();
    return 0;
}
