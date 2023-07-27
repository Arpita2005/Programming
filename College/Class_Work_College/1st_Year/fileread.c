#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
	
	FILE *fpt;
	char ch;
	
	fpt = fopen("myfile.txt","w");
	
	if(argc <2){
		printf("Please enter filename.\n");
		exit(1);
	}
	fpt = fopen(argv[1],"r");
	
	
	if(fpt == NULL){
		printf("Can't open the file.\n");
		exit(1);
	}
	
	ch = getc(fpt);
	
	while(ch !=EOF){
		putchar(ch);
		ch = getc(fpt);
	}
	
	fclose(fpt);
	return 0;
}
