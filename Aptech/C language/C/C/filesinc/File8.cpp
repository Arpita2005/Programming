/*
 * C Program to Append the Content of File at the end of Another
 */
#include<stdio.h>
#include<stdlib.h> 
int main()
{
    FILE *fstring1,*fstring2,*ftemp;
    char ch, file1[20], file2[20], file3[20]; 
    printf("Enter name of first file ");
    gets(file1);
    printf("Enter name of second file ");
    gets(file2);
    printf("Enter name to store merged file ");
    gets(file3);
    fstring1 = fopen(file1, "r");
    fstring2 = fopen(file2, "r");
    if (fstring1 == NULL || fstring2 == NULL)
    {
        perror("Error has occured");
        printf("Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }
    ftemp = fopen(file3, "w");
    if (ftemp == NULL)
    {
        perror("Error has occured");
        printf("Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }
    while ((ch = fgetc(fstring1)) != EOF)
        fputc(ch, ftemp);
    while ((ch = fgetc(fstring2) ) != EOF)
        fputc(ch, ftemp);
    printf("Two files merged  %s successfully.\n", file3);
    fclose(fstring1);
    fclose(fstring2);
    fclose(ftemp);
    return 0;
}
