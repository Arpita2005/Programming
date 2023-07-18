//Write C program to accept batting information of cricket team using structure. It contains player name and runs scored by player. Calculate total runs scored by cricket team.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct det
{
    char name[50];
    int run;
}d;
int main()
{
  int num,total_run=0;
  printf("Enter the number of Players:\n");
  scanf("%d",&num);
  d de[num];
  for(int i=0;i<num;i++)
  {
    printf("Detail %d\n",i+1);
    printf("Enter the name:\n");
    fflush(stdin);
    gets(de[i].name);
    printf("Enter the run:\n");
    scanf("%d",&de[i].run);
    printf("\n.....................\n");
  }
  for(int i=0;i<num;i++)
  {
    total_run=total_run+de[i].run;
  }
  printf("The Run Of Total Team is:%d",total_run);
  getch();
  return 0;

}
