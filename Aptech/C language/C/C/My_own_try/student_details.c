#include<stdio.h>
#include<conio.h>
struct student
{
    int roll,year;
    char name[100],course[100];
} s[100];

void details(struct student s, int num)
{
  if (s.roll == num)
  {
    printf("Student details\nName %s\nRoll %d\nCorse %s\nYear of joining %d\n",s.name, s.roll, s.course, s.year);
  }
}

void year (struct student s, int num)
{
    if(s.year==num)
    {
      printf("Student Name is %s\nRoll is %d\n", s.name, s.roll);
    }
}


int main()
{
    int total, i, time, roll;
  printf("Enter number of students\n");
  scanf("%d", &total);
  for (i = 0; i < total; i++)
  {
   printf("Enter Details of student %d\n", i + 1);
   printf("Enter Name:\n");
   fflush(stdin);
   gets(s[i].name);
   printf("Enter Roll :\n");
   scanf("%d", &s[i].roll);
   printf("Enter Course:\n");
   fflush(stdin);
   scanf("%s",&s[i].course);
   printf("Enter Year:\n");
   scanf(" %d",&s[i].year);
  }
  for (i = 0; i < total; i++)
  {
    printf("Details of %d student\n", i + 1);
    printf("Roll %d Name %s\n Corse %s\n year of joning %d\n", s[i].roll, s[i].name, s[i].course, s[i].year);
  }
  printf("specific year\n");
  scanf("%d\n", &time);
  for (i = 0; i < total; i++)
  {
    year(s[i], time);
  }
  printf("For specific details enter roll\n");
  scanf("%d\n", &roll);
  for (i = 0; i < total; i++)
  {
    details(s[i], roll);
  }
  getch();
  return 0;
}
