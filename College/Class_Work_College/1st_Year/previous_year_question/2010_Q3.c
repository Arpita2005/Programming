//Series:1-2+3-4+5-6+7-8.....N
#include <stdio.h>
#include<conio.h>
int series_sum(int n)
{
    if (n % 2 == 0)
        return (-(n / 2));
    else
        return ((n + 1) / 2);
}
int main()
{
    int n;
    printf("Series:1-2+3-4+5-6+7-8.....N\n");
    printf("Want some up to N terms?\nEnter the N term:");
    scanf("%d", &n);
    printf("Sum is:%d", series_sum(n));
    getch();
    return 0;
}