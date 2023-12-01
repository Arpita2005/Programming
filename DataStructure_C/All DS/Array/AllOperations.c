#include<stdio.h>
#include<conio.h>

//function prototype declaration

int insertend(int *,int);
int insertanyposition(int *,int);
int deleteend(int *,int);
int deleteanyposition(int *,int);
void display(int *,int);


int main()
{
    int a[20],i,j,n,ch;
    printf("\nEnter number of terms");
    scanf("%d",&n);
    printf("\nEnter numbers one by one");
    for(i=0;i<n;i++)
 { 
	scanf("%d",&a[i]);
 }
    printf("\nElements of the array are:");
    for(i=0;i<n;i++)
 {
	printf("%d ",a[i]);
 }
    while(1)
 {
    printf("\n1.insert end");
    printf("\n2.insert any position");
    printf("\n3.delete end");
    printf("\n4.delete any position");
    printf("\n5.display");
    printf("\n6.exit");
    printf("\nenter your choice");
    scanf("%d", &ch);
    if(ch==6)
    break;
switch(ch)
 {
case 1: n=insertend(a,n);
break;
case 2: n=insertanyposition(a,n);
break;
case 3: n=deleteend(a,n);
break;
case 4: n=deleteanyposition(a,n);
break;
case 5: display(a,n);
break;
default: printf("\nWrong choice");
 }
 }
getch();
return(1);
}
int insertend(int *a,int n)
{
	
    printf("\nEnter the value");
    scanf("%d", &a[n]);
    n=n+1;
    return(n);
}
int insertanyposition(int *a,int n)

{
	int pos,i;
	printf("\nEnter the position to be inserted between 1 to %d", n);
	scanf("%d", &pos);
	if(pos>=1&&pos<=n)
	{
		for(i=n-1;i>=pos-1;i--)
		{
			a[i+1]=a[i];
			
		}
		printf("\nEnter the value to be inserted");
		scanf("%d", &a[pos-1]);
		n=n+1;
	}
	return(n);
}
void display(int *a,int n)
{
	int i;
	printf("\nThe elements of the array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		
	}
}
int deleteend(int *a,int n)
{
	printf("\nThe deleted elemnt is %d ",a[n-1]);
	return(n-1);
}
int deleteanyposition(int *a,int n)
{
	int pos,i,j;
	printf("\nEnter the position to be inserted between 1 to %d", n);
	scanf("%d", &pos);
	for(i=pos-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	return(n-1);
}
