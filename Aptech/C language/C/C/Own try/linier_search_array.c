#include <stdio.h>
#include <conio.h>
int main()
{
    // Code
    int number_of_array, i, key, count = 0, flag = 0;
    printf("Enter the size of array : \n");
    scanf("%d", &number_of_array);
    int arr[number_of_array];
    for (i = 0; i < number_of_array; i++)
    {
        /* code */
        printf("Enter your elemets %d : \n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Search your entered element with your key : \n");
    scanf("%d", &key);
    for (i = 0; i < number_of_array; i++)
    {
        /* code */
        if (arr[i] == key)
        {
            /* code */
            printf("Array found at index number %d \n", i);
            count++;
            flag = 1;
        }
    }
    if (flag == 1)
    {
        /* code */
        printf("The array element has found %d times... \n", count);
        printf("Your element is %d", key);
    }
    else
    {
        printf("Element %d has not found...", key);
    }

    getch();
    return 0;
}