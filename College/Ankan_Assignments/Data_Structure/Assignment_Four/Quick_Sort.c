#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // First we choose rightmost element as pivot
    int i = (low - 1);     // index of smaller element 

    for (int j = low; j <= high - 1; j++)     // Iterate through the subarray
    {
        if (arr[j] < pivot)// if the current element is smaller than the pivot element that we have choosen before
        {
            i++;                    // Increment index of smaller element
            swap(&arr[i], &arr[j]); // Swap arr[i] and arr[j]
        }
    }

    swap(&arr[i + 1], &arr[high]); // Swap the pivot number with the element at (i + 1)

    return (i + 1); // pivot iiiiiindex return
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Partition the array into two subarrays
        int pi = partition(arr, low, high);

        // Recursively sorting the subarrays before and after the pivot
        quickSort(arr, low, pi - 1);  // Sort elements before the pivot
        quickSort(arr, pi + 1, high); // Sort elements after the pivot
    }
}

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);  // Called the quickSort func to sort the array

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
