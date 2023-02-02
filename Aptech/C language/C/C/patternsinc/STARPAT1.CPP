     #include<stdio.h>
     #include<conio.h>
     int main()
     {
	
	int i,j,k,n,x;
	char star='*',hyphen='-';
	printf("\n Enter the no of rows  :  ");
	scanf("%d",&n);
	x=n+1;
	for(i=n;i>=1;i--)
	{
	  for(j=1;j<=x-i;j++)
	    printf("%2c",star);
	  k=2*i-3;
	  for(j=1;j<=k;j++)
	    printf("%2c",hyphen);
	  if(k>0)
	    x=n+1;
	  else
	    x=n;
	  for(j=1;j<=x-i;j++)
	      printf("%2c",star);

	  printf("\n");
	}
	getch();
	return 0;
     }

