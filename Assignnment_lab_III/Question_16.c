//Write a program in C to print the array elements using recursion.
#include<stdio.h>
#include<conio.h>
int array(int num[],start,end)
{
    if(start>=end)
    {
        return 0;
    }
    else
    {
        return array(int arr(int num[],start+1,end));
    }
}
int main()
{
   int size;
   int arr[30];
   printf("Enter the size of the array:\n");
   scanf("%d",&size);
   printf("The Elements are:\n");
   for(int i=0;i<size;i++)
   {
       printf("%d",&arr[i]);
   }
   array(arr,0,size);
   getch();
   return 0;
}
