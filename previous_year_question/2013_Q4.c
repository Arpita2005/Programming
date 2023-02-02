//To print numbers not divisible by 10
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,count;
    printf("Enter the last number :\n");
    scanf("%d",&num);
    printf("\nAll the numbers omitting those numbers divisible by 10 :\n");
    for(int i=0;i<=num;i++)
    {
        if(i%10!=0)
        {
           printf("%d\n",i);
        }
        
    }
    getch();
    return 0;
}