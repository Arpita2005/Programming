#include<stdio.h>
#include<conio.h>
# define maxsize 1000
void largest_between_array();
int main()
{
    largest_between_array();
    getch();
    return 0;
}
void largest_between_array()
{
    int arr[maxsize];
    int i,size,number[30],j,a;

    /* Input size of array */
    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array : \n");
    for (i = 0; i < size; i++)
    {
        printf("Enter elements in position %d : ",i);
        scanf("%d", &number[i]);
    }
        for(i=0;i<size;++i)
        {
            for(j=i;j<size;j++)
            {
                if(number[i]<number[j])
                {
                    a=number[i];
                    number[i]=number[j];         //swapping
                    number[j]=a;
                }
            }
        }

    printf("The numbers arranged in decending order are:\n");
    for(i=0;i<size;++i)
    {
        printf("%5d\n",number[i]);
    }
    printf("The largest  number is:%d\n",number[0]);
}
