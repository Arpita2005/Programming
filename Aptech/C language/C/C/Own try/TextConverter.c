#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include"password.h"
#include "MorseText.h"

int main()
{
    char str[100],name[100],mail[100],input;
    double ph;
    printf("What Do You Want To Do ??\n1. Text To Morse Code\n2. Morse Code To Text\n3. Password Generator\n");
    printf("\n=================================\n");
    scanf("%c", &input);
    printf("\n=================================\n");
    if (input == '1')
    {
        fflush(stdin);
        text_to_morse(str);
    }
    else if (input == '2')
    {
        fflush(stdin);
        morse_to_text(str);
    }
    else if(input=='3')
    {
        int s;
        printf("Welcome User !! What do you want to do ?\n1. Add Details \n2. Get Details \n3. Exit\n");
        scanf("%d",&s);
        if(s==1)
        {
        printf("Enter Your Name :\n");
        gets(name);
        printf("Enter Your Mail Id :\n");
        gets(mail);
        printf("Enter Your phone Number :\n");
        scanf("%lf",&ph);
        password(str);
        }
        else if(s==2)
        {
            printf("Your Details Are :\n");
            printf("Name is :%s",name);
            printf("Mail id is :%s",mail);
            printf("Phone number is : %lf",ph);
            
        }
    }
    else
    {
        printf("Sorry !!! wrong input...");
        exit(0);
    }

    getch();
    return 0;
}