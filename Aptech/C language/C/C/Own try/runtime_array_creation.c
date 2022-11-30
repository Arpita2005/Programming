#include <stdio.h>
#include <conio.h>
int main()
{
    // Code
    int number_of_array, arr[number_of_array], i;

    printf("Enter the number of array : ");
    scanf("%d", &number_of_array);
    for (i = 0; i < number_of_array; i++)
    {
        /* code */
        printf("Enter your elemets %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < number_of_array; i++)
    {
        /* code */
        printf("Your elemets : %d", arr[i]);
    }

    getch();
    return 0;
}