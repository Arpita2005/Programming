#include <stdio.h>
#include<conio.h>
int main()
{
//to print first n natural numbers
    int n,start_num=1;
    printf("The value of n is: ");
    scanf("%d",&n);
    
    
    while(start_num<=n)
    {
        printf("The natural numbers are: %d\n",start_num);
        start_num++;
    }
    getch();
    return 0;
 }