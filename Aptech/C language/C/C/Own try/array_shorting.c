#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char name[100][100], temp[100]; // declaring array for strings
    int i, j, N;                    // declaring int variable for loops
    // clrscr();
    // system("cls");

    printf("==============================================\n");
    printf("Array sorting By : || Chittajit Chakraborty ||\n");
    printf("==============================================\n\n\n");

    printf("How much input do you want to get?\n");
    scanf("%d", &N);

    // Enter you text or name without space
    printf("Enter %d names\n", N);

    // making loop to get user input as per user input the value of N
    for (i = 0; i < N; i++)
    {
        // scanf("%s", name[i]); // getting words / names+
        fflush(stdin);
        gets(name[i]); // getting words / names
    }
    for (i = 0; i < N - 1; i++) // looping as per user elements inputs N
    {
        for (j = i + 1; j < N; j++) // as per first loop will run it will work with i's value
        {
            // making decision to not i or j == 0
            if (strcmpi(name[i], name[j]) > 0) // strcmpi for not case sensitive
            {
                strcpy(temp, name[i]);    // copying name[i] to temp
                strcpy(name[i], name[j]); // then copying name[j] to name [i]
                strcpy(name[j], temp);    // then copied nam[i] to temp is now passing to name j
            }                             // and this process will loop as per user input N
        }
    }
    // Now printing the sorted names here
    printf("\n----------------------------------------\n");
    printf(" || \t Sorted names || \n");
    printf("------------------------------------------\n");
    for (i = 0; i < N; i++) // now looping for index numbers using i ++
    {
        printf("%d/-\t%s\n", i + 1, name[i]); // let's print the name[]
    }
    printf("------------------------------------------\n");

    getch();
    return 0;
}