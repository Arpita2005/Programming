#include <stdio.h>

void selection_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;// Assuming the current element is the minimum

        for (int j = i + 1; j < size; j++)// Find the index of the minimum element in the unsorted part of the array
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        if (min_index != i) // Swapping the minimum element with the current element (if they are different)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

int main()
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int dataset[size];

    printf("Enter elements  ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &dataset[i]);
    }

    selection_sort(dataset, size);

    printf("Sorted dataset: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", dataset[i]);
    }
    printf("\n");

    return 0;
}
