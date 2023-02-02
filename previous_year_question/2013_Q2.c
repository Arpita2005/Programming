//Sum of even numbers from 1 to n
#include<stdio.h>
#include<conio.h>
int main()
{
    int last_num,sum=0;
    printf("Enter the last num:\n");
    scanf("%d",&last_num);
    printf("\nThe digits are: \n");
    for(int i=0;i<=last_num;i++)
    {
        printf("%d\n",i);
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("\n..............\n");
    printf("The sum of even numbers are:\n%d",sum);
    getch();
    return 0;
}