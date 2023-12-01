#include <stdio.h>
#include <stdbool.h>
// #include <ctype.h>
#include<conio.h>
bool isPangram(char str[]) 
{
    bool alphabetPresent[26] = {false};

    for (int i = 0; str[i] != '\0'; i++) 
    {
        char c = tolower(str[i]);
        if (c >= 'a' && c <= 'z') 
        {
            alphabetPresent[c - 'a'] = true;
        }
    }

    for (int i = 0; i < 26; i++) 
    {
        if (!alphabetPresent[i]) 
        {
            return false;
        }
    }

    return true;
}

int main() {
   char sentence[100];
   printf("Enter the input :\n");
   gets(sentence);
    if (isPangram(sentence)) {
        printf("It is a pangram.\n");
    } else {
        printf("It is not a pangram.\n");
    }
    getch();
    return 0;
}
// int main()
// {
//     char arr[100];
//     int i;
//     printf("Enter the input :\n");
//     gets(arr);
//         char c =tolower(arr[i]);
//        if (c >= 'a' && c <= 'z') 
//         {
//             printf("It is a pangram\n");
//         }
//         else
//         {
//             printf("It is not a pangram\n");
//         }
//     getch();
//     return 0;
// }