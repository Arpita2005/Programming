#include <stdio.h>
#include<conio.h>

void rotateArray(int arr[], int n, int d) 
{
     int temp[d];
    for (int i = 0; i < d; i++) 
    {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n - d; i++) 
    {
        arr[i] = arr[i + d];
    }
    for (int i = 0; i < d; i++) 
    {
        arr[n - d + i] = temp[i];
    }
}
void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int n ,d,arr[n];
    printf("The size of array is :\n");
    scanf("%d",&n);
  
    printf("Enter the Elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Original array is :\n");
    printf("\n.................................\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter how much time do you want the rotation ?\n");
    scanf("%d",&d);
   
    // Perform circular right-to-left rotation
    rotateArray(arr, n, d);

    printf("\nRotated array: ");
    printArray(arr, n);
    getch();
   return 0;
}

// n represents the size of the array.
// d represents the number of positions by which you want to rotate the array.
// The expression n - d + 1 is used to calculate the index within the array after the rotation. Here's how it works:

// n is the total number of elements in the array.
// d is the number of positions you want to rotate the array to the right.
// Subtracting d from n gives you the position in the original array where the rotated elements will start.
// For example, let's say you have an array with n = 5 elements and you want to rotate it to the right by d = 2 positions.
//  After the rotation, the first two elements (arr[0] and arr[1]) will become the last two elements in the rotated array.
//  Therefore, n - d (which is 5 - 2) is equal to 3, and adding 1 (n - d + 1) gives you the index 4 where the rotated elements will start in the rotated array.

// So, in this specific case, n - d + 1 is used to determine the starting index for copying the elements from the temporary array back into the original array after the rotation.