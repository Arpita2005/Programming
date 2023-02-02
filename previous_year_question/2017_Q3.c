//WAP in c to interchange largest and smallest number in an array
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,min,max,a;
    int arr[size];
    printf("Enter the size Of An Array:\n");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(int i=0;i<size;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(int i=0;i<size;i++)
    {
    if(min>arr[i])
      min=arr[i];
    if(max<arr[i])
       max=arr[i];
    }
    printf("The Highest Element is:%d",min);
    printf("The Smallest Element is:%d",max);
    printf("After interchenging the values will be:");
       a=min;
       min=max;
       max=a;
    printf("The Highest Element is:%d",min);
    printf("The Smallest Element is:%d",max);
    getch();
    return 0;
}