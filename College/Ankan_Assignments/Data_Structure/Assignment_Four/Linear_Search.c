#include <stdio.h>
#include <conio.h>

int linear_search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i; // Return the index where the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main()
{
    int size;
    printf("Enter the number of elements ");
    scanf("%d", &size);

    int dataset[size];

    printf("Enter the data elements \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &dataset[i]);
    }

    int search_key;
    printf("Enter the search key: ");
    scanf("%d", &search_key);

    
    int index = linear_search(dataset, size, search_key); // Perform linear search


    if (index != -1)
    {
        printf("Search key :  %d was found at index %d.\n", search_key, index + 1);
    }
    else
    {
        printf("Search key not found\n");
    }

    getch();
    return 0;
}
