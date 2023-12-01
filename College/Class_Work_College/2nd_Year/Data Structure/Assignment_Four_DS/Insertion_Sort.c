#include <stdio.h>
#include <conio.h>

void insertionSort(int *arr, int size)
{
    int currentElement, previous_index;

    // Loop for passes
    for (int i = 1; i < size; i++)
    {
        currentElement = arr[i];
        previous_index = i - 1;

        // Loop for each pass
        while (previous_index >= 0 && arr[previous_index] > currentElement)
        {
            arr[previous_index + 1] = arr[previous_index];
            previous_index--;
        }
        arr[previous_index + 1] = currentElement;
    }
}

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, size);

    printf("After sorting, the elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    getch();
    return 0;
}
