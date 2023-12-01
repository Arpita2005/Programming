//rotate from right to left ( left to right also included )
#include<stdio.h>
#include<conio.h>
void rotateLeft(int arr[], int n, int d)
{
    int temp;
    for (int i = 0; i < d; i++)
    {
        temp = arr[0]; // Store the first element
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1]; // Shift elements to the left
        }
        arr[n - 1] = temp; // Place the first element at the end
    }
}
void rotateRight(int arr[], int n, int d)
{
    int temp;
    for (int i = 0; i < d; i++)
    {
        temp = arr[n - 1]; // Store the last element
        for (int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1]; // Shift elements to the right
        }
        arr[0] = temp; // Place the last element at the beginning
    }
}
int main()
{
    int n, d, direction;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array of user defined size i.e n

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of rotations: ");
        scanf("%d", &d);
    printf("\n\nEnter the direction \n\t0 for left \n\t1 for right \n : ");
        scanf("%d", &direction);
    if (direction==0)
    {
        rotateLeft(arr,n,d);
    }
    else if (direction==1)
    {
        rotateRight(arr,n,d);
    }
    printf("\nRotated array: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
