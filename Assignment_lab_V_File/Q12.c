//Write a C program to find occurrence of a word in a text file.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#define BUFFER_SIZE 1000
int countOccurrences(FILE *fptr, const char *word);
int main()
{
    FILE *fptr;
    char path[100];

    char word[50];

    int wCount;

    /* Input file path */
    printf("Enter file path: ");
    scanf("%s", path);

    /* Input word to search in file */
    printf("Enter word to search in file: ");
    scanf("%s", word);

    /* Try to open file */
    fptr = fopen(path, "r");

    /* Exit if file not opened successfully */
    if (fptr == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");

        exit(0);
    }

    // Call function to count all occurrence of word
    wCount = countOccurrences(fptr, word);

    printf("'%s' is found %d times in file.", word, wCount);
    fclose(fptr);
    getch();
    return 0;
}

int countOccurrences(FILE *fptr, const char *word)
{
    char str[BUFFER_SIZE];
    char *pos;

    int index, count;
    
    count = 0;

    // Read line from file till end of file.
    while ((fgets(str, BUFFER_SIZE, fptr)) != NULL)
    {
        index = 0;

        // Find next occurrence of word in str
        while ((pos = strstr(str + index, word)) != NULL)
        {
            index = (pos - str) + 1;
            count++;
        }
    }

    return count;
}