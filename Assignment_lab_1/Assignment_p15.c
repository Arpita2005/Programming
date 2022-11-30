#include<stdio.h>  
#include<conio.h>
int main()  
{  
    int i, n, sum=0;  
    printf("Enter any number: ");  
    scanf("%d", &n);  
    for(i=2; i<=n; i+=2)  
    {  
        sum += i;  
    }  
    printf("Sum of all even numbers from 1 to %d: %d", n, sum);  
    getche();
    return 0;  
}  