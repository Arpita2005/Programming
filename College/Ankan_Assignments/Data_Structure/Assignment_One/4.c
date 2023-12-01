// find the max and min
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10],i,n,max , min;

    printf("Enter the size of array ");
        scanf("%d",&n);

    for(i=0;i<n;i++)
{
    printf("Enter the elements in array %d:- ", i+1);
    scanf("%d",&arr[i]);
}

 for(i=0;i<n;i++)
{
    if(arr[i]>arr[i+1])
    {
        arr[i+1]=arr[i];
        max=arr[i];
    }
}
printf("%d is the max \n ",max);

for(i=0;i<n;i++)
{
    if(arr[i]<arr[i+1])
    {
     arr[i+1]=arr[i];
     min=arr[i];
    }
}

printf("%d is the min",min);
getch();
}
