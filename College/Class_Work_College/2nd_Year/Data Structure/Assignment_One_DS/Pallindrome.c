#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char arr[50];
    int i, length = 0;
    int isPalindrome = 1; // Assume it's a palindrome initially

    printf("Enter the Word :\n");
    gets(arr);
    length = strlen(arr);
    
    for (i = 0; i < length / 2; i++) {
        if (arr[i] != arr[length - i - 1]) {
            isPalindrome = 0; // Set the flag to 0 if it's not a palindrome
            break; // No need to continue checking
        }
    }

    if (isPalindrome) {
        printf("It is a palindrome word.\n");
    } else {
        printf("It is not a palindrome word.\n");
    }

    getch();
    return 0;
}
