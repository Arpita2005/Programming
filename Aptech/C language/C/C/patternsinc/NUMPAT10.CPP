#include <stdio.h>
#include <conio.h>

int main()
{

  int i, j, n, count;
  printf("\nEnter the no of rows :  ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    count = 0;
    for (j = i; j <= n; j++)
    {
      printf("%4d", j);
      count++;
    }
    if (count < n)
    {
      for (j = 1; j <= n - count; j++)
        printf("%4d", j);
    }
    printf("\n");
  }

  getch();
  return 0;
}