#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int input,last,i=1;
    //while(1)
    do
    {
        printf("Enter the last number :\n");
        scanf("%d",&last);
        for(i=1;i<=last;i++)
        {
            printf("%d\n",i);
        }
        printf("Do you want to do one more time :(1 For Yes)||(2 For No)\n");
        scanf("%d",&input);
        // if(input>1||input==0||input<1)
        // {
        //     exit(0);
        // }
    } while (input!=2);
    exit(0);
    
    getch();
    return 0;
}