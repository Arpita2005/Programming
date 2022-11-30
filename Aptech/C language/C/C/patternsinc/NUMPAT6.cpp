#include <stdio.h>
#include <conio.h>
// space = n-i (n=total no of rows, i=row index number)
// chars = 2*i -1 (i=row index number= 1,2,3,4)

int main()
{
  int i, space, rows, k;
  printf("Enter the number of rows : ");
  scanf("%d", &rows);
  for (i = 1; i <= rows; ++i)
  {
    for (space = 1; space <= rows - i; ++space)
    {
      printf(" ");
    }
    for (k = 1; k <= 2 * i - 1; k++)
    {
      printf("* ");
    }
    printf("\n");
  }

  getch();
  return 0;
}
/*

#include <stdio.h>
#include<conio.h>

int main()

{
    int i,space,rows,k=0;
    printf("Enter the number of rows: ");

    scanf("%d",&rows);

    for(i=1;i<=rows;++i)

    {
     for(space=1;space<=rows-i;++space)

       {
     printf("  ");
       }

       while(k!=2*i-1)
       {
         printf("* ");

         ++k;

       }

      k=0;

     printf("\n");

  }

  return 0;

}*/
