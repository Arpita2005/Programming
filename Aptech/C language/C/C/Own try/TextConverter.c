#include<stdio.h>
#include"MorseText.h"
#include<stdlib.h>
#include<conio.h>
int main()
{
    char str[100],input;
    printf("What Do You Want To Do ??\n1. Text To Morse Code\n2. Morse Code To Text\n");
    printf("\n=================================\n");
    scanf("%c",&input);
    printf("\n=================================\n");
    if(input=='1')
    {
        printf("Give Your Input :\n");
        scanf("%s",str);
        fflush(stdin);
        text_to_morse(str);

    }
    else if(input=='2')
    {
        printf("Give Your Input :\n");
        scanf("%s",str);
        fflush(stdin);
        //morse_to_text(str);

    }
    else
    {
        printf("Sorry !!! wrong input...");
        exit(0);
    }

    getch();
    return 0;
}