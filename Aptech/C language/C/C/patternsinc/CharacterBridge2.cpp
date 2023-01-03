#include <stdio.h>  
#include<conio.h> 
// Function to print the character bridge
int main() 
{ 
    int i,j,n,x,y;
    char alphabet;
    printf("\nInput the no of rows:   ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	alphabet='A';
    	
    	for(j=n;j>=i;j--)
    		printf("%2c",alphabet++);
    		
    	for(j=1;j<=2*i-3;j++)
    		printf("%2c",' ');
    		
    	x=(i==1)?2:1;
    	y=(i==1)?1:0;
    	
    	alphabet-=x;
    	
    	for(j=n;j>=i+y;j--)
    		printf("%2c",alphabet--);
    		
    	printf("\n");
	}
	getch();
    return 0; 
} 
