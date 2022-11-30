#include <stdio.h>
int main()
{
    int n1,fact,sum,a,b,i,j,x,dig,Math,document;
        
            printf("Enter lower limit :");
            scanf("%d",&a);
            
            printf("Enter lower limit :");
            scanf("%d",&b);

            for(i=a;i<=b;i++)
            {
                sum=0;
                n1=i;
                x=i;
                while(n1!=0)
                {
                    fact=1;
                    dig=n1%10;
                    for(j=dig;j>=1;j--)
                    fact=fact*j;
                    sum+=fact;n1=Math.floor(n1/10);
                }
                if(x==sum)
                document.write("<br> Your Peterson Number is " +x)
            }
        

    return 0;
}