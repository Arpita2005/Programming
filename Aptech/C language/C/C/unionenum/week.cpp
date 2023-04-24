#include<stdio.h>
#include<conio.h>
//enum week{sunday, monday, tuesday, wednesday, thursday=90, friday, saturday};
enum week{sunday, monday, tuesday, wednesday, thursday, friday, saturday};
int main()
{
      enum week today;
      today=thursday;
      printf(" Thursday is %dth day",today+1);
      getch();
      return 0;
}
