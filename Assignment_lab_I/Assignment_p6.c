#include <stdio.h>
#include<conio.h>
// divisible by 5 and 11
int main()
{
    int number;
    printf("The number is: \n");
    scanf("%d",&number);
    
    if(number%5==0 && number%11 == 0){
         printf("The number is divisible by 5 and 11");
    }
   
    else
    printf("It is not divisible");
    getch();
    return 0;
}