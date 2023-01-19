//Write a C program to read a file and remove the sppace between two words of its content
#include<stdio.h>
#include<conio.h>
    #include<ctype.h>
#include<string.h>
int main()
{
	FILE * pfile;
	int a;
	printf("\n Remove the spaces between two words  :\n");  
    printf("-----------------------------------------\n"); 	
	pfile=fopen ("file.txt","r");	
	printf(" After removing the spaces the content is : \n");
	if (pfile)
	{
		do
        {
			a = fgetc (pfile);
			if ( isgraph(a) ) putchar (a);
		} while (a != EOF);
		fclose (pfile);
	}
	printf("\n\n");
    getch();
	return 0;
}
