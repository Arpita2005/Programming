/*Write a program in C to reverse a string using recursion.*/
# include <stdio.h>
#include<conio.h>
void reverse(char *str)
{
if (*str)
{
	reverse(str+1);
	printf("%c", *str);
}
}
int main()
{
char a[100];
printf("Enter the String:\n");
gets(a);
printf("The reverse is:\n");
printf("========================\n");
reverse(a);
getch();
return 0;
}
