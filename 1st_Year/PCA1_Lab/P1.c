  //WAP to generate fibonacci series within given range.The range will be user input.
#include<stdio.h>
#include<conio.h>
int main()
{
    int start_num,result,end_num,i,n1=0,n2=1;
    printf("Enter the start number:\n");
    scanf("%d",&start_num);
    printf("Enter the end number:\n");
    scanf("%d",&end_num);

    printf("The fibonacci series is:%d%d\n",n1,n2);
    for(i=start_num;i<=end_num-2;i++)
    {
        result=n1+n2;
        n1=n2;
        n2=result;
    }
    printf("%d\n",result);
    getch();
     return 0;
}