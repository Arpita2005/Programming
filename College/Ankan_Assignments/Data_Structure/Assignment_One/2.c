//reverse array of n integers;n=10
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10],i,n;
    printf("enter the Size ");
        scanf("%d",&n);
    printf("enter the numbers ");
    for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=n-1;i>=0;i--)
{
    printf("%d\n",arr[i]);
}
getch();
}
