#include <stdio.h>
#include <stdbool.h>
#include<conio.h>

bool condition(char s[50]) 
{
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (!(s[i] >= '0' && s[i] <= '9')) 
        {
            return false;
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
        printf("\nIt is an Integer\n");
    } 
    else 
    {
        printf("\nIt is a String\n");
    }
    getch();
    return 0;
}