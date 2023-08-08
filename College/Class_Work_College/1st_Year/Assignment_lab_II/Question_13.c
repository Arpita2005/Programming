#include<conio.h>
#include <stdio.h>
void main()
{
    int array[10];
    int i, j, n, m, temp, key, pos;

    printf("Enter how many elements \n");
    scanf("%d", &n);
    printf("Enter the elements \n");

    for (i = 0; i < n; i++)
    {
        printf("The %d number is:\n",i+1);
        scanf("%d", &array[i]);
    }

    printf("Input array elements are \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    // Sorting the elements of the array
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("Sorted list is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    printf("Enter the element to be inserted \n");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (key < array[i])
        {
            pos = i;
            break;
        }
        if (key > array[n - 1])
        {
            pos = n;
            break;
        }
    }
    if (pos != n)
    {
        m = n - pos + 1;
        for (i = 0; i <= m; i++)
        {
            array[n - i + 2] = array[n - i + 1];
        }
    }

    array[pos] = key;

    printf("Final list is \n");
    for (i = 0; i < n + 1; i++)
    {
        printf("%d\n", array[i]);
    }
    getch();
}
//include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int arr[1000];
//     int i,num,new_num,show;

//     printf("Enter the size of the array:\n");
//     scanf("%d",&num);

//     printf("Enter the %d number:\n",num);
//     for(i=0;i<num;i++)
//     {
//         printf("The %d number is:\n",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter the new number:\n");
//     scanf("%d",&new_num);

//     for(i=0;i<num/*(arr[i]+new_num)*/;i++)
//     {
//         printf("%5d\n",arr[i]);
//     }
//     for(i=0;i<num;i++)
//     {
//         if(new_num<arr[i])
//         {
//             show=i;
//             break;
//         }
//         else
//         {
//             show=i+1;
//         }
//     }
//     for(i=num+1;i>=show;i--)
//         arr[i]=arr[i-1];
//     arr[show]=new_num;
// printf("After enter the list:\n");
// for(i=0;i<num/*(arr[i]+new_num)*/;i++)
//     {
//         printf("%5d\n",arr[i]);
//         printf("\n");
//     }

//    getch();
//     return 0;
// }
