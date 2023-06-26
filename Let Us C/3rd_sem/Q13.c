// Letter vowel or consonent
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter the character \n");
    scanf("%d",&ch);
    if(ch=='A'||'E'||'I'||'O'||'U'||'a'||'e'||'i'||'o'||'u')
    {
        printf("It is a vowel\n")
    }
    else
    {
        printf("It is a consonent\n");
    }

    getch();
    return 0;
}