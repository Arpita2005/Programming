#include <stdio.h>
#include <conio.h>
int flag = 0;
void charc_wp_num_sc();
void character();
void number();
void space();
void special_character();
int main()
{
    // Code
    charc_wp_num_sc();
    getch();
    return 0;
}

void charc_wp_num_sc()
{
    // variabel declaration
    char input;

    // Getting input from user
    printf("Enter character, number, space, spacial character \n");
    scanf("%c", &input);

    // Making decesion for character, number, space, spacial character

    ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) ?
     character(): 
     (input >= '0' && input <= '9') ? 
     number() : 
     (input == ' ')? 
     space():  
     special_character();
}
// First : Character
void character()
{
    printf("It's a Character \n");
}
// Second : Number
void number()
{
    printf("It's a Number \n");
}
// Third : White Space
void space()
{
    printf("It's a White space \n");
}
// FOrth : Special Character
void special_character()
{
    printf("It's a Special Character \n");
}