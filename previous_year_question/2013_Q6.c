//LCM of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int number_1 = 0, number_2 = 0,lcm = 0;
    printf("Enter the smaller number:\n");
    scanf("%d", &number_1);
    printf("Enter the greater number:\n");
    scanf("%d", &number_2);
    lcm = number_1;
    printf("\n===========================\n");
    while(1)
    {
        if(lcm % number_1 == 0 && lcm % number_2 == 0)
        {
            printf("The lcm of %d and %d is \n%d :", number_1, number_2, lcm);
            break;
        }
        lcm += 1;
    }
    getch();
    return 0;
}