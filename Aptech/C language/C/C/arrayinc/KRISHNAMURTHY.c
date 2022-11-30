#include<stdio.h>
#include<conio.h>
int fact(int);
main()
{
      int x,n;
      int strong(int);                                                                       
      printf(“Enter a number :”);
      scanf("%d",&n);
      x=strong(n);
      if(x==n)
        printf(“\n KRISHNAMURTHY’S NUMBER “);
      else
        printf(“\nNOT KRISHNAMURTHY’S NUMBER”);
      getch();
}
int strong(int n)
{
     int s=0,r,f;
     while(n>0)
     {
         r=n%10;
         f=fact(r);
         s=s+f;
         n=n/10;
     }
     return s;
}
int fact(int n)
{
     int f=1;
     while(n>0)
     {
         f=f*n;
         n–;
     }
     return f;
}
