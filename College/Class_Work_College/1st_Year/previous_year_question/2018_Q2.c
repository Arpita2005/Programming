
//              1
//            2 3
//          4 5 6
//       7 8 9 10
// 11 12 13 14 15
#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,k,row;
  k=1;
  printf("Enter the number of row :\n");
  scanf("%d",&row);
  for(i=1;i<=row;i++)
  {
    for(j=row;j>=1;j--)
    {
      if(j > i)
        printf("   ");
      else
        printf("%3d",k++);
    }
    printf("\n");
  }
  getch();
  return 0;
}