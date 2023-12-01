//check sentence is pangram or not
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int main() {
    int alphabet[26] = {0};
    char c;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n')
    {
        if (isalpha(c)) //returns a nonzero value (true) if an uppercase or lowercase letter, and 0 (false) otherwise.
        {
            int index = tolower(c) - 'a';
            alphabet[index] = 1;
        }
    }

    bool isPangram = true;
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == 0)
        {
            isPangram = false;
            break;
        }
    }

    if (isPangram)
    {
        printf("The input is a pangram.\n");
    } else
    {
        printf("The input is not a pangram.\n");
    }

    return 0;
}

