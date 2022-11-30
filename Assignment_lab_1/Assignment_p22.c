#include<stdio.h>
#include<conio.h>
int main()
{
    int number_1 = 0, number_2 = 0, gcd = 0, lcm = 0, i = 0;
    printf("Enter the smaller number:\n");
    scanf("%d", &number_1);
    printf("Enter the greater number:\n");
    scanf("%d", &number_2);
    lcm = number_1;
    while(1)
    {
        if(lcm % number_1 == 0 && lcm % number_2 == 0)
        {
            printf("The lcm of %d and %d is %d", number_1, number_2, lcm);
            break;
        }
        lcm += 1;
    }
    for(i = 1; i <= number_1; i++)
    {
        if(number_1 % i == 0 && number_2 % i == 0)
            gcd = i;
    }
    printf("\nThe gcd of %d and %d is %d", number_1, number_2, gcd);
    getch();
    return 0;
}