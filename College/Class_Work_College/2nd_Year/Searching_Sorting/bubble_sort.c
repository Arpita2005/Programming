#include<stdio.h>
#include<conio.h>
void printarr(int size,int arr)
{
   for(int i=0;i<size;i++)
   {
    printf("%d\n",arr[i]);
   }
   printf("\n");
}
void buublesort(int size,int arr)
{
    int temp=0,a=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                a=1;
            }
            else
            {
                a=0;
            }
        }
        if(a)
        {
            return;
        }
    }
}
int main()
{
    int size,arr[size];
    printf("Enter the size of the array :\n");
    scanf("%d",&size);
    printarr(size,arr);
    buublesort(size,arr);
    printarr(size,arr);

}