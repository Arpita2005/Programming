#include<stdio.h>
#include<conio.h>
int main()
{
    int j,i;
    for(i=1;i<=4;i++)
    {
        printf("\n");
        for(j=1;j<=i;++j)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}