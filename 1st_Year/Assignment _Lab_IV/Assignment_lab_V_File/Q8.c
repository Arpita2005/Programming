//Write a C program to count characters, words and lines in a text file.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
FILE * file;
    char path[100];

    char ch;
    int characters, words, lines;
    printf("Enter source file path: ");
    scanf("%s", path);

    file = fopen(path, "r");
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");

        exit(EXIT_FAILURE);
    }

    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        /* Check new line */
        if (ch == '\n' || ch == '\0')
            lines++;

        /* Check words */
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    if (characters > 0)
    {
        words++;
        lines++;
    }
    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);


    fclose(file);
    getch();
    return 0;
}