#include<stdio.h>
#include<conio.h>
void sum_of_series();
int main()
{
    sum_of_series();
    getch();
    return 0;
}
void sum_of_series()
{
    int number,total=0;
    int i;
    printf("Enter the start number:\n");
    scanf("%d",&number);
    for(i=number;i>=1;i--)
    {
        // printf("%d",i);
        total+=i;
    }
    printf("The result is:%d",total);
}