/*
C program to find Length of the String by passing String/ Character Array
as an argument using User Define Functions.
*/
#include <stdio.h>
#include <conio.h>
/*function declaration*/
int stringLength(char *);

int main()
{
    char text[100];
    int length;

    printf("Enter text (max- 100 characters): ");
    gets(text);
    /*we can also use gets(text) - To read complete text untill '\n'*/

    length = stringLength(text);

    printf("Input text is: %s\n", text);
    printf("Length is: %d\n", length);

    getch();
    return 0;
}
/* function definition...
 * Function     :   stringLength
 * Argument(s)  :   char * - Pointer of character arrar
 * Return Type  :   int - Length of the string (integer type)
 */
int stringLength(char *str)
{
    int len = 0;
    /*calculate string length*/
    for (len = 0; str[len] != '\0'; len++)
        ;
    /*return len*/
    return len;
}
