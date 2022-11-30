#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, d;
    for (a = 1; a <= 9; a++)
    {
        for (b = 9; b >= a; b--)
            printf("%3c", ' ');
        for (c = 1; c <= a; c++)
            printf("%3d", c);
        for (d = c - 2; d >= 1; d--)
            printf("%3d", d);
        printf("\n");
    }

    getch();
    return 0;
}
