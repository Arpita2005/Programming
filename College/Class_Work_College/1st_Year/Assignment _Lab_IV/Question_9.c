// Write a program in C to count total number of vowel or consonant in a string.
#include<stdio.h>
#include<conio.h>
int main()
{
    char line[500];
    int add=0,increase=0;
    printf("The Line is:\n");
    gets(line);
    for(int i=0;line[i]!='\0';i++)
  {
        if(line[i]=='a'||line[i]=='e'||line[i]=='o'||line[i]=='u'||line[i]=='i')
        {
            add++;
        }
        else
        {
            increase++;
        }
  }
     printf("The vowels are:%d\n",add);
     printf("The consonants are:%d\n",increase);
     getch();
     return 0;
}