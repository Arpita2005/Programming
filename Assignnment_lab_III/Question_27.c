/***Write a program in C to Check whether a given String is Palindrome or not using function.***/
#include <stdio.h>
#include <string.h>
#include<conio.h>
int checkpalindrome(char *s)
{
    int i,c=0,n;
    n=strlen(s);
	for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 	}
 	if(c==i)
        return 1;
    else
        return 0;
}
 
int main()
{
    char s[1000];  
   
    printf("Enter the string : ");
    gets(s);
    
    if(checkpalindrome(s))
 	    printf("The string is a Palindrome.");
    else
        printf("The string is not a Palindrome.");
        getch();
        return 0;
}