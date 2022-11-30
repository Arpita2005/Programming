#include <stdio.h>
int main() 
{

   	FILE *fp;
   	char buff[255];

   	fp = fopen("E:/program.txt", "r");
   	fscanf(fp, "%s", buff); 
   	printf("1 : %s\n", buff );  // This 

   	fgets(buff, 255, (FILE*)fp); 
   	printf("2: %s\n", buff );   // is testing for fprintf...
   
   	fgets(buff, 255, (FILE*)fp);
   	printf("3: %s\n", buff );   // 1000000 10.980000 Saheli Sinha Arnab Banerjee
   	
   	fgets(buff, 255, (FILE*)fp);
   	printf("4: %s\n", buff );   // This is testing for fputs...
   	fclose(fp);
   	
   	return 0;

}
