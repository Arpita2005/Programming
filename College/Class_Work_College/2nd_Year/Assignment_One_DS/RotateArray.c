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
