/* C Program to Find the Size of File using File Handling Function  */
#include<stdio.h> 
int main()
{
    FILE *fp;
    char filename[30];
    int size = 0;
    printf("\nInput the file name:   ");
    gets(filename);
    fp=fopen(filename,"r");
    if(fp == NULL)
        printf("\nFile unable to open ");
    else 
        printf("\nFile opened ");
    fseek(fp, 0, 2);    /* file pointer at the end of file */
    size = ftell(fp);   /* take a position of file pointer in size variable */
    printf("\nThe size of given file is : %d bytes\n", size);    
    fclose(fp);
}
