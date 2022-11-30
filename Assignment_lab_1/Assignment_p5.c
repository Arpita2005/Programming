#include <stdio.h>
#include<conio.h>
// Find maximum between two numbers
int main()
{
    int number_1,number_2,maximum,minimum;
    printf("The first numbers is: \n");
    scanf("%d",&number_1);
    printf("The second numbers is: \n");
    scanf("%d",&number_2);
    
    if(number_1>=number_2)
    maximum=number_1;
    else
    maximum=number_2;
    
    if(number_1<=number_2)
    minimum=number_1;
    else
    minimum=number_2;
    
    printf("The maximum no is:%d the minimum no is:%d",maximum,minimum);
    getch();
    return 0;
}