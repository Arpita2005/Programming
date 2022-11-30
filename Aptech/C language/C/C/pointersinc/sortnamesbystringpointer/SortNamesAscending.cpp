#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	 char T[30];
	 int I,J,K,N;
	 printf("\n Enter no of persons:   ");
	 scanf("%d",&N);
	 char ARRAY[N][20];
	 printf("\nEnter %d names\n",N);
	 fflush(stdin);
	 for(I=0;I<N;I++)
	 {
		 gets(ARRAY[I]);
	 }
	 printf("\n\nDisplay %d names\n\n",N);
	 for(I=0;I<N;I++)
	 {
		 printf("%s \t",ARRAY[I]);
	 }
	 printf("\n");
	 for(I=0;I<N-1;I++)
	 {
		for(J=0;J<N-1-I;J++)
		{
 			K=strcmp(ARRAY[J],ARRAY[J+1]);
 			if(K>0)
 			{
				strcpy(T,ARRAY[J]);
				strcpy(ARRAY[J],ARRAY[J+1]);
				strcpy(ARRAY[J+1],T);
 			}
		}
	 }
	printf("\nSorted Names\n");
	for(I=0;I<N;I++)
	{
		 printf("%s\t",ARRAY[I]);
	}	
	return 0;
}
