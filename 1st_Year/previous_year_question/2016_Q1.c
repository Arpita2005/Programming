//WAP in c to take an integer and print it by removing even digits eg: 54327 output : 537
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char num[50];
    printf("Enter a number:\n");
    gets(num);
   for(int i=0;i<strlen(num);i++)
   {
      if(num[i]%2!=0)
    {
       printf("%c",num[i]);
    }
   }
    printf("\n");
    getch();
    return 0;
}