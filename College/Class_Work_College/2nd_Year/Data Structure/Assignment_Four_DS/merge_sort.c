#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

void merge(int array[], int left, int middle, int right)
{
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Create temporary arrays
    int leftArray[n1], rightArray[n2];

    // Copy data to temporary arrays
    for (i = 0; i < n1; i++)
        leftArray[i] = array[left + i];
    for (j = 0; j < n2; j++)
        rightArray[j] = array[middle + 1 + j];

    i = 0, j = 0;
    k = left;

    while (i < n1 && j < n2)
    {
        if (leftArray[i] <= rightArray[j])
        {
            array[k] = leftArray[i];
            i++;
        }
        else
        {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        array[k] = leftArray[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;
        mergeSort(array, left, middle);
        mergeSort(array, middle + 1, right);
        merge(array, left, middle, right);
    }
}

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main()
{
    int data[] = {12, 11, 13, 5, 6, 7};
    int data_size = sizeof(data) / sizeof(data[0]);

    printf("Original array is \n");
    printArray(data, data_size);

    mergeSort(data, 0, data_size - 1);

    printf("\nSorted array is \n");
    printArray(data, data_size);

    getch();
    return 0;
}
