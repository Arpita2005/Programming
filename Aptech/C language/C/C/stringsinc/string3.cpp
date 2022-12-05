#include<stdio.h>
#include<conio.h>
// Length of a string
int main()  
{
    char s[1000],i;
    printf("Enter a string: ");
    //scanf("%s", s);
    gets(s);
    for(i = 0; s[i] != '\0'; ++i); 
    
    printf("Length of string: %d", i);
    getch();
    return 0;
}
