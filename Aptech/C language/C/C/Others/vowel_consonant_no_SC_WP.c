#include <stdio.h>
#include <conio.h>
int main()
{
    // Declaring variable charecter with inp
    char inp;
    int lower_vowel, upper_vowel, vowel, v = 0;
    // Gettin input to declare
    printf("Enter you spcial character, number, letter : ");
    scanf("%c", &inp);
    // To declare a number
    if (inp >= '0' && inp <= '9')
    {
        printf("You have entered a number : %c", inp);
        v = 1;
    }
    // To declare a vowel or consonant
    else if (((inp == 'a') || (inp == 'e') || (inp == 'i') || (inp == 'o') || (inp == 'u')))
    {
        printf("%c is vowel\n", inp);
        v = 1;
    }
    else if ((inp == 'A') || (inp == 'E') || (inp == 'I') || (inp == 'O') || (inp == 'U'))
    {
        printf("%c is vowel\n", inp);
        v = 1;
    }
    // To declare a White Space
    else if (inp == ' ')
    {
        printf("You have enterd a white space: ");
        v = 1;
    }
    // To declare a consonent
    else if (((inp > 'a') && (inp <= 'd')) || ((inp > 'e') && (inp <= 'h')) || ((inp > 'i') && (inp <= 'n')) || ((inp > 'o') && (inp <= 't')) || ((inp > 'u') && (inp <= 'z')))
    {
        printf("%c is consonent", inp);
        v = 1;
    }
    else if (((inp > 'A') && (inp <= 'D')) || ((inp > 'E') && (inp <= 'H')) || ((inp > 'I') && (inp <= 'N')) || ((inp > 'O') && (inp <= 'T')) || ((inp > 'U') && (inp <= 'Z')))
    {
        printf("%c is consonent", inp);
        v = 1;
    }

    // To declare a spacial character
    else if (v == 0)
    {
        printf("%c is Special Character", inp);
    }
    getch();
    return 0;
}