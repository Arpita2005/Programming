//Enum constant making of months in a year DETAIL: Dress Code Color
#include<stdio.h>
#include<conio.h>
enum month{January=1,February,March,April,May,June,July,August,September,October,Novenber,Decenber};
int main()
{
    int option;
    printf("Enter the month to see the details:\n");
    scanf("%d",&option);
    printf("\n==========================\n");
    if(option==1)
    {
        printf("Name of Month:January\nDress Code:White\n");
    }
    else if(option==2)
    {
         printf("Name of Month:February\nDress Code:Black\n");
    }
     else if(option==3)
    {
         printf("Name of Month:March\nDress Code:Red\n");
    }
    else if(option==4)
    {
         printf("Name of Month:April\nDress Code:Grey\n");
    }
    else if(option==5)
    {
         printf("Name of Month:May\nDress Code:Green\n");
    }
    else if(option==6)
    {
        printf("Name of Month:June\nDress Code:Blue\n");
    }
     else if(option==7)
    {
         printf("Name of Month:July\nDress Code:Violet\n");
    }
     else if(option==8)
    {
         printf("Name of Month:August\nDress Code:Sea-Green\n");
    }
     else if(option==9)
    {
         printf("Name of Month:September\nDress Code:Pink\n");
    }
     else if(option==10)
    {
         printf("Name of Month:October\nDress Code:Maroon\n");
    }
     else if(option==11)
    {
         printf("Name of Month:November\nDress Code:Purple\n");
    }
     else if(option==12)
    {
         printf("Name of Month:February\nDress Code:Black\n");
    }
  getch();
  return 0;

}