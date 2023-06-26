// Print Prime numbers from 1 to n
#include<stdio.h>
#include<conio.h>
int main()
{
    int end_num,count=0,j;
    printf("Enter the ending range :\n");
    scanf("%d",&end_num);
    for(int i=1;i<=end_num;i++)
{
        for(j=2;j<i/2;j++)
    {
        if(i%j==0)
       {
        count++;
        break;
       }
    }
       if(count==0&j!=1)
      {
          printf("%d is a prime number \n",j);
      }
        else
      {
          printf("%d is not a prime number \n",j);
      }

}

    getch();
    return 0;
}