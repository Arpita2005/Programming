//weekdays as enum
#include<stdio.h>
#include<conio.h>
enum weekdays{ Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
int main()
{
  enum weekdays today;
  printf("Please enter the day:\n");
  scanf("%d",&today);
  if(today==1)//(today==Monday)
  {
    printf("Dress code: White\n");
  }
  else if(today==2)
  {
    printf("Dress code: Blue\n");
  }
  else if(today==3)
  {
    printf("Dress code: Pink\n");
  }
   else if(today==4)
  {
    printf("Dress code: Black\n");
  }
   else if(today==5)
  {
    printf("Dress code: Yellow\n");
  }
   else if(today==6)
  {
    printf("Dress code: Maroon\n");
  }
   else if(today==7)
  {
    printf("Dress code: Green\n");
  }
  else
  {
    printf("You have choose wrong option\n");
  }
    getch();
  return 0;
}