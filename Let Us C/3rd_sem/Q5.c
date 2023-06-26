//  Prime Number 

#include <stdio.h>
#include <conio.h>
int main()
{
  int num,count;
  printf("Enter the number :\n");
  scanf("%d",&num);
  for(int i=2;i<num/2;i++)
  {
    if(num%i==0)
   {
     count++;
     break;
    }
  }
  printf("\n.............................\n");
  if(count==0&num!=1)
  {
      printf("It is a prime number \n");
  }
  else
  {
      printf("It is not a prime number \n");
  }
  getch();
  return 0;
}