
#include<stdio.h>
#include<stdlib.h>

int main(){
	
	FILE *fpt1, *fpt2;
	char ch;
	
	fpt1 = fopen("myfile.txt","r");
	
	if(fpt1 == NULL){
		printf("Can't open the file.\n");
		exit(1);
	}
	
	fpt2 = fopen("myfilecopy.txt","w");
	
	ch = getc(fpt1);
	
	while(ch !=EOF){
		//putchar(ch);
		putc(ch,fpt2);
		ch = getc(fpt1);
	}
	
	fclose(fpt1);
	fclose(fpt2);
	
	
	return 0;
}

