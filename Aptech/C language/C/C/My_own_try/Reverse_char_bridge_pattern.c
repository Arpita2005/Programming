#include<stdio.h>
#include<conio.h>
void char_bridge_pattern();
int main()
{
    char_bridge_pattern();
    getch();
    return 0;
}
void char_bridge_pattern()
{
    int i,j,number;
    printf("Enter the number:\n");
    scanf("%d",&number);
    for(i=0;i<=number;i++)
    {
        for(j='A';j<=(('A'+number) -i);j++)
        {
            if (j >= ('A' + number - 1) + i)
            printf("(('A' + number - 1) -(j % ('A' + number - 1))");
            else if (j <= ('A' + number - 1) - i)
            printf("j");
            else
            printf(" ");
        }
        printf("\n\n");
    }
}