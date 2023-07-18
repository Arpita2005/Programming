#include<stdio.h>
#include<conio.h>
# define maxsize 1000
int main()
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
        printf("Enter elements in position %d : ", i + 1);
        scanf("%d", &number[i]);
    }
        for(i=0;i<size;++i)
        {
            for(j=i+1;j<size;j++)
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
   // printf("The second largest number is:%d\n",number[1]);
    printf("The second smallest number is:%d\n",number[size-2]);
    getch();
    return 0;
}
