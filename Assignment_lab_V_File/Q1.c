//1. Write a C program to create a file and write contents, save and close the file.

#include<stdio.h>
#include<conio.h>
int main()
{
  FILE *fp=NULL;
  char ch[50];
  fp=fopen("text.txt","w");
    if(fp == NULL)
    {
		printf("Can't open the file.\n");
		exit(1);
	}
    printf("Enter data which you want to store = ");
    if(fgets(ch,50,stdin) == NULL)
    {
        printf("Error in reading the input data\n");
        //close the file
        fclose(fp);
        exit(1);
    }
    fwrite(ch, sizeof(ch[50]),50,fp);
    fclose(fp);
    printf("File has been created and saved successfully\n");
    getch();
    return 0;
}
