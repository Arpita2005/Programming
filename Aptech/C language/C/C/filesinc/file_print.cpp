#include <stdio.h>
int main() 
{
	   FILE *fp;
	   int i=1000000;
	   float f1=10.98;
	   char student1[]="Saheli Sinha";
	   char student2[]="Arnab Banerjee";
	   fp = fopen("E:/abc/xyz/program.txt", "w+");
	   fprintf(fp, "This is testing for fprintf...\n");
	   fprintf(fp,"%d %f %s %s\n",i,f1,student1,student2);
	   fputs("This is testing for fputs...\n", fp);
	   printf("File is created and written");
	   
	   fclose(fp);
	   
	   return 0;
}
