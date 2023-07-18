//Write a C program to append content to a file.
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *file1;
    char input[50];
    printf("Your Input is:\n");
    gets(input);
    file1=fopen("file1","a+");
    if(file1==NULL)
    {
        exit(1);
    }
    fprintf(file1,"Input is:%s",input);
    fclose(file1);
    getch();
    return 0;
}