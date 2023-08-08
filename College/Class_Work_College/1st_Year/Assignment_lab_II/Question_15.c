#include <stdio.h>
#include <conio.h>
int sort_Deletion(int *arr, int size)
{
    int index, i;
    if (size == 0)
    {
        printf("Underflow\nDeletion unsucessfull\n");
        return size;
    }
    printf("Enter the Index number\n");
    scanf("%d", &index);
    if (index >= (size))
    {
        printf("Out of range\nDeletion unsucessfull\n");
        return size;
    }
    for (i = index; i < (size)-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (size)--;
    return size;
}
int main()
{
    // Code

    int size = 8, i;
    int array[] = {12, 14, 16, 18, 20, 22, 24, 26};
    size = sort_Deletion(array, size);
    for (i = 0; i < size; i++)
    {
        printf("| %3d |", array[i]);
    }
    getch();
    return 0;
}