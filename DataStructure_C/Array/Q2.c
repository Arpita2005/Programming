//Sum of all elements in an array in c
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,arr[size],sum=0;
    printf("Enter the size of the array :\n");
    scanf("%d",&size);
    printf("Enter the elements of the array :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe elements are :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n...........................\n");
    printf("\nThe sum of all elements of the array are :\n");
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);

    getch();
    return 0;
}