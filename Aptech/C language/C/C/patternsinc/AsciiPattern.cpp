#include<stdio.h>
#include<conio.h>

 int main()
 {
   int i,j,n;
   char ch='*',sp=' ';
   printf("\nEnter the no  of rows\n");
   scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n-i;j++)
            printf("%c",sp);
       for(j=1;j<=2*i-1;j++)
	    printf("%c",ch);
       printf("\n");
   }
   printf("\n\n\n");
    for(i=n;i>=1;i--)
    {
       for(j=1;j<=n-i;j++)
	     printf("%c",sp);
       for(j=1;j<=2*i-1;j++)
	     printf("%c",ch);
       printf("\n");
    }
    return 0;
}
   
