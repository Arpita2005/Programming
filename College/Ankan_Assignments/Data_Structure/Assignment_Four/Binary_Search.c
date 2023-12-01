#include <stdio.h>
#include<conio.h>
// Function to perform binary search
int binary_search(int arr[], int size, int key)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
        {
            return mid; // index where the value is been found
        }
        else if (arr[mid] < key)
        {
            left = mid + 1; // if value not found in the left part , then the value that is after the mid becomes the 'left' , i.e we are now searching the right part
        }
        else
        {
            right = mid - 1; // similarly if value not found in right part , value prior to mid becomes the right , i.e we are searching in the left half now
        }
    }

    return -1;
}

// Function to perform Bubble Sort
void bubble_sort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int dataset[size];

    printf("Enter elements of the dataset separated by spaces: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &dataset[i]);
    }


    bubble_sort(dataset, size); // PERFORMING BUBBLE SORT HERE

    printf("Sorted dataset: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", dataset[i]);
    }
    printf("\n");

    int search_key;
    printf("Enter the search key: ");
    scanf("%d", &search_key);

    int index = binary_search(dataset, size, search_key);

    // Display the result
    if (index != -1)
    {
        printf("The search key %d was found at index %d.\n", search_key, index + 1);
    }
    else
    {
        printf("The search key %d was not found \n", search_key);
    }

    getch();
    return 0;
}
