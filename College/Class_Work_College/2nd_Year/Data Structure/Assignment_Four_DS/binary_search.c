#include <stdio.h>
#include <conio.h>
void bubbleSort(int size, int *arr)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int size, int key)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            return mid; // Element found, return its index
        }

        if (arr[mid] < key)
        {
            left = mid + 1; // Search in the right half
        }
        else
        {
            right = mid - 1; // Search in the left half
        }
    }
    return -1;
}

int main()
{
    int size, key;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; // Declare the array after getting the size.

    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); // Remove \n here
    }

    bubbleSort(size, arr);

    printf("Enter the key element to search: ");
    scanf("%d", &key);

    int r = binarySearch(arr, size, key);
    if (r != -1)
    {
        printf("%d element found at index number: %d\n", key, r);
    }
    else
    {
        printf("Element could not be found\n");
    }

    getch(); // Use getchar() instead of getch() to pause
    return 0;
}
