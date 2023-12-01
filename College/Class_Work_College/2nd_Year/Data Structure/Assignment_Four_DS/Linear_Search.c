//1.	Implement Linear search on user input data set and search key to be user input.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,key,temp=1;
    printf("Enter the size of the array :\n");
    scanf("%d",&x);
    int arr[x];
    printf("Enter the elements :\n");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Which element you want to search :\n");
    scanf("%d",&key);
    for(int i=0;i<x;i++)                                
    {
        if(key==arr[i])
        {
            temp = 0;
            break;
        }
    }
    if(temp==0)
    {
        printf("%d element is found using Linear search",key);
    }
    else
    {
        printf("Element Not Found\n");
    }
    getch();
    return 0;
}