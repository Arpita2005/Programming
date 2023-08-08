#include<stdio.h>
#include<conio.h>
void perfect_in_a_range();
int main()
{
    perfect_in_a_range();
    getch();
    return 0;
}
void perfect_in_a_range()
{
    int start_num,end_num,i,n=1,sum=0;
    printf("Enter the start number:\n");
    scanf("%d",&start_num);
    printf("Enter the end number:\n");
    scanf("%d",&end_num);
    printf("All the numbers are:\n");
    for(i=start_num;i<end_num;i++)
    {
        while(n<i)
        { 
            if(i%n==0)
            sum=sum+n;
            n++;
        }
        if(sum==i)
        {
        printf("%d",i);
        }
    }
    printf("\n");
}