//Write a program in C to check whether a character is digit or not.
#include<stdio.h>
#include<conio.h>
int main()
{
       char line[100];
       int i;
       printf("Give your input please:\n");
       gets(line);
       for(i=0;line[i]!='\0';i++)
       {
          if(line[i]>='0'&&line[i]<='9')
          {
             printf("%c It is a digit\n",line[i]);
          }
          else
          {
            printf("%c It is not a digit\n",line[i]);
          }
       }

       getch();
       return 0;
}