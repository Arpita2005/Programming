#include <stdio.h>
int main()
{
    int i, inp, sum = 0;
    printf("Enter limit : ");
    scanf("%d", &inp);
    // for loop terminates when n is less than count
    for (i = 1; i <= inp; i++)
    {
        sum += i * i;
        // sum=sum+i*i
    }
    printf("Sum = %d", sum);

    return 0;
}