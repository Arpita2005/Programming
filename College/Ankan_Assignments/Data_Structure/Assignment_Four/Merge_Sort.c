#include <stdio.h>

// Function to merge two subarrays of arr[].....First subarray is arr[l..m].....Second subarray is arr[m+1..r]
void merge(int arr[], int left, int middle, int right)
{
    int loop1, loop2, loop3;
    int n1 = middle - left + 1; //n1 means number of element in first array
    int n2 = right - middle; // n2 is number of elemens in the 2nd  array

    // Create temporary arrays
    int leftArray[n1], rightArray[n2];

    // Copy data to temporary arrays leftArray[] and rightArray[]
    for (loop1 = 0; loop1 < n1; loop1++)
        leftArray[loop1] = arr[left + loop1];
    for (loop2 = 0; loop2 < n2; loop2++)
        rightArray[loop2] = arr[middle + 1 + loop2];

    // Merge the temporary arrays back into arr[l..r]
    loop1 = 0;    // Initial index of the first subarray
    loop2 = 0;    // Initial index of the second subarray
    loop3 = left; // Initial index of the merged subarray

    while (loop1 < n1 && loop2 < n2)
    {
        if (leftArray[loop1] <= rightArray[loop2])
        {
            arr[loop3] = leftArray[loop1];
            loop1++;
        }
        else
        {
            arr[loop3] = rightArray[loop2];
            loop2++;
        }
        loop3++;
    }

    // Copy the remaining elements of leftArray[], if there are any
    while (loop1 < n1)
    {
        arr[loop3] = leftArray[loop1];
        loop1++;
        loop3++;
    }

    // Copy the remaining elements of rightArray[], if there are any
    while (loop2 < n2)
    {
        arr[loop3] = rightArray[loop2];
        loop2++;
        loop3++;
    }
}

// Function to perform merge sort on arr[left..right]
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        // Find the middle point of the array
        int middle = left + (right - left) / 2;

        // Recursively sort the first and second halves
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Merge the sorted halves
        merge(arr, left, middle, right);
    }
}

int main()
{
    int numElements;
    printf("Enter the number of elements: ");
    scanf("%d", &numElements);

    int elements[numElements];
    printf("Enter %d elements: ", numElements);
    for (int loop1 = 0; loop1 < numElements; loop1++)
    {
        scanf("%d", &elements[loop1]);
    }

    // Perform merge sort
    mergeSort(elements, 0, numElements - 1);

    // Print the sorted array
    printf("Sorted array: ");
    for (int loop1 = 0; loop1 < numElements; loop1++)
    {
        printf("%d ", elements[loop1]);
    }
    printf("\n");

    return 0;
}
