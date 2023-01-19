#include <stdio.h>
#include<conio.h>
// The value is given by user
int main()
{
    int number_1,number_2,result;
    printf("The value of number_1 and number_2 are:");
    scanf("%d%d",&number_1,&number_2);
    
    result=number_1+number_2;
    
    printf("The result is: %d",result);
    getch();
    return 0;
}