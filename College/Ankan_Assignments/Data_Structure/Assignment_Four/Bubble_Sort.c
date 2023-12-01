#include <stdio.h>
#include <conio.h>
// Function to perform Bubble Sort
void bubble_sort(int arr[], int size)
{
    int temp;
    int swapped;

    for (int i = 0; i < size - 1; i++)
    {
        swapped = 0; // Flag to check if any elements were swapped in this pass

        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Set the flag to indicate a swap occurred
            }
        }
        if (swapped == 0) // No two elements sorted ?? hurray , that means our array is sortedd !! :-)
        {
            break;
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

    bubble_sort(dataset, size);

    printf("Sorted dataset: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", dataset[i]);
    }
    printf("\n");

    getch();
    return 0;
}
