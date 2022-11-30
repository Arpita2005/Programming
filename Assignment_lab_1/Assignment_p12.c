#include<stdio.h>
#include<conio.h>
//find odd number in the given range
int main()
{
    int i,num;
    printf("please enter a range: ");
    scanf("%d",&num);
    
    printf("\n Odd numbers from 0 to %d are:\n",num);
    i=1;
    while(i<=num)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
          //  i=i+1;
        }
    i++;
    }
    getch();
    return 0;
}