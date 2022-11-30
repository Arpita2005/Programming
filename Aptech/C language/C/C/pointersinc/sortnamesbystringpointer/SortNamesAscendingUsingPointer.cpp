#include<stdio.h>
#include<malloc.h>
#include<string.h>
int main()
{
      char *x[20];
      int i,n=0;
      void reorder(int n,char *x[]);
      printf("Enter no. of String : ");
      scanf("%d",&n);
      printf("\n");     
      for(i=0;i<n;i++)
      {
      	fflush(stdin);
        printf("Enter the Strings %d : ",i+1);
        x[i]=(char *)malloc(20*sizeof(char));
        gets(x[i]);
      }
      reorder(n,x);
      printf("\nreorder list is :  \n");
      for(i=0;i<n;i++)
      {
        printf("%d %s\n",i+1,x[i]);
      }
      return 0;
}
void reorder(int n,char *x[])
{
    int i,j;
    char t[20];
    for(i=0;i<n-1;i++)
    {
    	for(j=i+1;j<n;j++)
    	if(strcmp(*(x+i),*(x+j))>0)
    	{
        	strcpy(t,*(x+j));
        	strcpy(*(x+j),*(x+i));
        	strcpy(*(x+i),t);
    	}    	
	}
    return;
}
  
