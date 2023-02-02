//Find the largest numbers between three numbers 
#include <stdio.h>
#include<conio.h>
int main() 
{

  double n1, n2, n3;
  printf("Enter three numbers: \n");
  scanf("%lf %lf %lf", &n1, &n2, &n3);
  printf("\n============================\n");
  if (n1 >= n2 && n1 >= n3)
    printf("%.2lf is the largest number.", n1);

  else if (n2 >= n1 && n2 >= n3)
    printf("%.2lf is the largest number.", n2);

  else
    printf("%.2lf is the largest number.", n3);
    getch();
  return 0;
}