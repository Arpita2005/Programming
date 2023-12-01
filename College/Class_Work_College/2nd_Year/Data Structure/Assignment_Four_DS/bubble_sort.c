#include <stdio.h>
#include <conio.h>

void printarr(int size, int *arr)
{
    printf("The elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

void bubblesort(int size, int *arr)
{
    int temp = 0, a = 0;
    for (int i = 0; i < size - 1; i++)
    {
        printf("Working on pass number: %d\n", i + 1);
        a = 0; // Initialize 'a' here to 0 for each pass
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                a = 1;
            }
        }
        if (a == 0)
        {
            // If 'a' remains 0 after a pass, the array is already sorted, and you can break out early.
            break;
        }
    }
}

int main()
{
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    int arr[size]; // Define the array after getting the size input

    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Before arranging the elements:\n");
    printarr(size, arr);

    bubblesort(size, arr);

    printf("After arranging the elements:\n");
    printarr(size, arr);

    getch();
    return 0;
}
