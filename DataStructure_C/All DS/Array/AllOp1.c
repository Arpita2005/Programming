#include<stdio.h>
#include<conio.h>
int insert_end(int *a, int *trackpos, int value)
{
    trackpos=&value;
    (*trackpos)++;
};

int main()
{
    int a[20],j,n=0,ch;
    int *trackpos;
    trackpos=&a;
    printf("Enter number of terms :\n");
    scanf("%d",&n);
    printf("\nEnter numbers one by one :\n");
    for(int i=0;i<n;i++)
  { 
	scanf("%d",&a[i]);
  }
    printf("\nElements of the array are: \n");
    for(int i=0;i<n;i++)
  {
	printf("%d ",a[i]);
  }

    printf("\nEnter the new value : \n");
    scanf("%d",&ch);
    insert_end(a,trackpos,ch);
    n++;
    printf("After inertion the array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",&a[i]);
    }
    getch();
    return 0;

}