#include<stdio.h>
#include<conio.h>
int main()
{
    int low_value,high_value,sum,temp,fact,i,x,n;
    printf("Enter the low_value:\n");
    scanf("%d",&low_value);
    printf("Enter the high_value:\n");
    scanf("%d",&high_value);
    for(x=low_value;x<=high_value;x++)
    {
        temp=x;
        sum=0;
        while(temp!=0)
        {
            n=temp%10;
            fact=1;
            for(i=1;i<=n;i++)
            {
                fact=fact*i;
            }
            sum=sum+fact;
            temp=temp/10;
        }
        if(x==sum)
        {
            printf("Peterson Numbers are:%d\n",x);
        }
    }
    getch();
    return 0;
    

}