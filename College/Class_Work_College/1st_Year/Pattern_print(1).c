#include<stdio.h>
#include<conio.h>
void pattern();

int main()
{    pattern();
     getch();
    return 0;
}

void pattern()
{
int arr[5][5];

for (int line = 0; line < 5; line++)
{
    
    for (int i = 0; i <= line; i++)
    {
    
    if (line == i || i == 0)
        arr[line][i] = 1;
   
    else
        arr[line][i] = arr[line-1][i-1] + arr[line-1][i];
    printf("%d ", arr[line][i]);
    }
    printf("\n");
}
}