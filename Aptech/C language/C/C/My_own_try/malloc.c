#include<stdio.h>
#include<stdlib.h>

int main(){
//	int numbers[20];//
	int n;
	int *pt;
	
	printf("Enter the how much memory(bytes) is required for intergers: ");
	scanf("%d",&n);
	
	pt=(int*) malloc(n*sizeof(int));
//	pt=(int*) calloc(n,sizeof(int));
	
	*(pt+0)=23;
	*(pt+1)=78;
	
	printf("The values are %d %d",*(pt+0),*(pt+1));
	
	free(pt);
	
	
	return 0;
}
