#include <stdio.h>
#include<conio.h>

void rotateArray(int arr[], int n, int d) 
{
    int temp;
    for (int i = 0; i < d; i++) 
    {
        // temp = arr[n - 1]; 
        // for (int j = n - 1; j > 0; j--) 
        // {
        //     arr[j] = arr[j - 1]; 
        //     arr[0] = temp; 
        // }
        for(int j=0;arr[j]!='\0';j++)
        {
            arr[j]=arr[j+1];
            temp=arr[n-1];
            arr[0]=temp;
        }
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
