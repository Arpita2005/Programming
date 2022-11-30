#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
     printf("The start number is:\n");
     scanf("%d",&n);
    for(i=n;i<=(n+5);i++)
    {
        printf("The numbers are: %d\n",i);
    }

    if(n%2==0)
    {
        printf("The even numbers are:%d\n",n);
    }
    else //(n%2!=0)
    {
          printf("The odd numbers are:%d\n",n);
    }
       getche();
       return 0;

}

