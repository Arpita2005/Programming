#include <stdio.h>
#include <conio.h>
#include <math.h>

int power(int num1, int num2);
int main()
{
    int a, b, ans;
    char one_more;
    // Code
    do
    {
        /* code */

        printf("Enter your first base number : ");
        scanf("%d", &a);
        printf("Enter your second power number : ");
        scanf("%d", &b);
        ans = power(a, b);
        printf("Your base %d your power value %d answer is = %d \n\n\n", a, b, ans);

        // choosing do you want to continue or not
        printf("Do you want to do one more time? \n");
        printf("Press Y to yes or N to no :\n");
        // scanf("%c", one_more);
        one_more = getche();
        while (one_more == 'N')
        {
            /* code */
            one_more == 'n';
        }

        printf("Terminal has stopped \n");
        printf("Cause you have entered %c \n\n", one_more);

    } while (one_more != 'n');

    // getch();
    return 0;
}
int power(int num1, int num2)
{
    int answer;
    answer = pow(num1, num2);
    return (answer);
}