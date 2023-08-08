#include<stdio.h>
#include<conio.h>
int search_element(int[1000],int,int);
int main()
{
    int size,index,key,i,count =0;
    int arr[30];
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    index=size;
    printf("Your %d element is:\n",size+1);
    for(i=0;i<size;i++)
    {
        printf("element %d:\n",i);
        scanf("%d",&arr[i]);
       
    }
     printf("Enter key to search:\n");
        scanf("%d",&key);
        while(index!=0)
        {
            index=search_element(arr,index-1,key);
            printf("Key found at position:%d\n",index+1);
            count++;
        }
        if(!count)
        printf("Key not found\n");
        return 0;
}
int search_element(int array[],int size,int key)
{
int location;
if(array[size]==key)
{
    return size;
}
else if(size==-1)
{
return -1;
}
else
{
    return(location=search_element(array,size-1,key));
}
}