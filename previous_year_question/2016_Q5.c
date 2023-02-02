//WAP in c to find the prime factor of a number
#include<stdio.h>
#include<conio.h>
void primefactor(int num)
{
    printf("Prime factors of %d is:",num);
    for(int count=2;num>=1;count++)
    {
        while(num%count==0)
        {
            printf("\n%d",count);
            num=num/count;
        }
    }
     printf("\n");
}
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    primefactor(num);
    getch();
    return 0;
}