//Write a program in C to count total number of alphabets, digits and special characters in a string.
#include<stdio.h>
#include<conio.h>
int main()
{
    char string[300];
    int count=0,add=0,i=0,other=0;
    printf("Enter the line to check how much alphabet or digit or sprcial character\n");
    gets(string);
    for(int i=0;string[i]!='\0';i++)
    {
    if((string[i]>='A'&&string[i]<='Z')||(string[i]>='a'&&string[i]<='z'))
    {
        count++;
    }
    
    else if(string[i]>='0'&&string[i]<='9')
       {
             add++;    
       }
    else
       {
             other ++;
       }
    
    }
     printf(" The number of letters are:%d\n",count);
      printf("The number of digit are:%d\n",add);
       printf("The number of sc are:%d\n",other);
    getch();
    return 0;
}