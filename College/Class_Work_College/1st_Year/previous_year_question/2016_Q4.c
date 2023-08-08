//WAP to convert Arabic number upto 999 to Roman for example 26  become XXXVI, 41 become XLI.Take I=1,V=5,X=10,L=50,C=100 and D=500
#include <stdio.h>
#include<conio.h>
int main()
{
    int n;
    char* l[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "VIX"};

    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 10)
    {
        if (n >= 500)
        {
            n-=500;
            printf("D");
        }
        else if (n >= 100)
        {
            n-=100;
            printf("C");
        }
        else if (n >= 50)
        {
            n-=50;
            printf("L");
        }
        else if (n >= 10)
        {
            n-=10;
            printf("X");
        }
    }

    if (n > 0)
    {
        printf("%s", l[n-1]);
    }

    printf("\n");
    getch();
    return 0;
}
