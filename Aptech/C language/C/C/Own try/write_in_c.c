#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Code
    FILE *location = fopen("write_in_c.txt", "r+");
    char i[100];
    // int i;
    if (location == NULL)
    {
        /* code */
        printf("Error file or location\n");
        exit(1);
    }
    else
    {
        // fscanf(location, "%s", &i);
        fscanf(location, "%s", &i);
        // printf("Salary is : %s \n", i);
        printf("Salary is : %s \n", i);
    }
    fclose(location);

    return 0;
}