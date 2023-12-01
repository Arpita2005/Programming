#include <stdio.h>
// Function to perform insertion sort
void insertionSort(int array[], int length)
{
    int currentElement, previousIndex, currentIndex;

    // Loop through the array from the second element to the end
    for (currentIndex = 1; currentIndex < length; currentIndex++)
    {
        currentElement = array[currentIndex];
        previousIndex = currentIndex - 1;

        // Move elements of the array[0..currentIndex-1] that are greater than the current element
        // to one position ahead of their current position
        while (previousIndex >= 0 && array[previousIndex] > currentElement)
        {
            array[previousIndex + 1] = array[previousIndex];
            previousIndex--;
        }

        // Place the current element at its correct position in the sorted part of the array
        array[previousIndex + 1] = currentElement;
    }
}

int main()
{
    int numberOfElements;

    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    int inputArray[numberOfElements];

    printf("Enter %d elements:\n", numberOfElements);
    for (int i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &inputArray[i]);
    }

    insertionSort(inputArray, numberOfElements);

    printf("Sorted array:\n");
    for (int i = 0; i < numberOfElements; i++)
    {
        printf("%d ", inputArray[i]);
    }
    printf("\n");

    return 0;
}
