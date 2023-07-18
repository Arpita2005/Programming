#include<stdio.h>
#include <conio.h>
 
 int sumofarray(int a[],int n)
 {
 	int min,max,i;
 	min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
    
    printf("minimum of array is : %d",min);
    printf("\nmaximum of array is : %d",max);
 }
int main()
{
    int a[1000],i,n,sum;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sumofarray(a,n);
 getch();
 return 0;
    
}