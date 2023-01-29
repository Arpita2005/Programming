//Write a C program to copy contents from one file to another file.
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
	FILE *fptr1, *fptr2;
	char filename[100], c;

	printf("Enter the filename to open for reading \n");
	scanf("%s", filename);

	fptr1 = fopen(filename, "r");
	if (fptr1 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}

	printf("Enter the filename to open for writing \n");
	scanf("%s", filename);

	fptr2 = fopen(filename, "w");
	if (fptr2 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}

	c = fgetc(fptr1);
	while (c != EOF)
	{
		fputc(c, fptr2);
		c = fgetc(fptr1);
	}

	printf("\nContents copied to %s", filename);

	fclose(fptr1);
	fclose(fptr2);
    getch();
	return 0;
}
