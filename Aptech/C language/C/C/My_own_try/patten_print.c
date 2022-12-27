//Write a program to print the pattern 1, 8, 72, 64, 521, 612, 343, 215, ......, n terms.
#include"stdio.h"
#include"conio.h"
int call_reverse(int x)
{
    int rem=0,reverse=0;
     while(x!=0)
        {
            rem=x%10;
            reverse=reverse*10+rem;
            x=x/10;
        }
        return reverse;
}
int main()
{
    int end_num,rem=0,reverse=0,x,i,c,last;
    printf("Enter the number where the range will end:\n");
    scanf("%d",&end_num);
    //printf("%d\n",x);
       x=end_num;
       last=call_reverse(end_num);
        for(i=1;i<=1000;i++)
        {
              x=i*i*i;
              if(x==last)
              {
                c=i;
                break;
              }

        }
        for(i=1;i<=c;i++)
        {
            printf("%d\t",call_reverse(i*i*i));
        }
    getch();
    return 0;
}