// Using getchar() to read a character
#include <stdio.h>
// Input a string character by character
//  so that space can be taken
int main()
{

    char name[30], ch; // name is a string[] variable, value is 30
    int i = 0;
    printf("Enter a name :    ");
    while (ch != '\n') // terminates if user hit enter
    {
        ch = getchar(); // Take note 1
        name[i] = ch;
        i++;
    }
    name[i] = '\0'; // inserting null character at end
    // In c language use \0 to end a string by default the compilor add it automacilly but the old one will not.
    printf("Name: %s", name);
    return 0;
}
/*
Note 1
=======
getchar is a function in C programming language that reads a single
character from the standard input stream stdin, regardless of what it is,
and returns it to the program. It is specified in ANSI-C and is the most
 basic input function in C. It is included in the stdio. h header file.
*/
