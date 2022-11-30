//Reading from a text file
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    FILE *fptr;
	fptr = fopen("E:/program1.txt","r");

   	if(fptr == NULL)
   	{
       printf("Error!");   
       exit(1);             
  	}    
	fscanf(fptr,"%d", &num);
    printf("Value of number=%d", num);
    fclose(fptr);

	return 0;
}
