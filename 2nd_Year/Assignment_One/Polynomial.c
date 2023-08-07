#include <stdio.h>
#include<conio.h>
int main() 
{
    int n;

    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);

    int value[n + 1];

    for (int i = 0; i <= n; i++) {
        printf("Enter coefficient for x^%d: ", i);
        scanf("%d", &value[i]);
    }

    printf("The polynomial is: ");
    for (int i = n; i >= 0; i--) {
        if (value[i] != 0) {
            printf("%dx^%d", value[i], i);
            if (i > 0 && value[i - 1] >= 0) {
                printf(" + ");
            }
        }
    }
    printf("\n");
    getch();
    return 0;
}
