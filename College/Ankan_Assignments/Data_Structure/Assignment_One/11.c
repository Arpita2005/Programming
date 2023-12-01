#include <stdio.h>
#include <stdbool.h>
#include<conio.h>
bool condition(char s[50])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (!(s[i] >= '0' && s[i] <= '9')) //checks if there is any value between 0-9, if yes then true , else false
        {
            return false; // it is returning false as the if condition is true na overall....we are using '!' (not)
        }
    }
    return true;
}
int main()
{
    char str[50] ;
    int i;//= "ABCD";
    printf("Enter the input :\n");
    scanf("%s",&str[i]);
    if (condition(str))
    {
        printf("It is an Integer\n");
    }
    else
    {
        printf("String\n");
    }
    getch();
    return 0;
}
