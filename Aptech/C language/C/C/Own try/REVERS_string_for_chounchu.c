#include<stdio.h>
void reverse(char *arr,int n){
	int i,temp;
	for(int i=0;i<=n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
}
int main(){
//Reverse printing without swapping the value from the location(NOT USING "void reverse" FUNCTION)
    printf("*********************************Reverse printing without swapping the value from the location*********************************\n");
    char a[]={"chakra sayan roy"};
    printf("Before\n");
    for(int j=0;j<sizeof(a);j++)
        printf("%c",a[j]);
    printf("\nAfter\n");
    for(int i=(sizeof(a)-1);i>=0;i--)
        printf("%c",a[i]);

printf("\n\n\n");

//Reverse printing after swapping the value permanently from the location(USING "void reverse" FUNCTION)
    printf("****************************Reverse printing after swapping the value permanently from the location****************************\n");
    char arr[]={"chakra sayan roy"};
    printf("Before\n");
    for(int i=0;i<(sizeof(arr)-1);i++)
		printf("%c",arr[i]);
	reverse(arr,(sizeof(arr)-1));
    printf("\nAfter\n");
	for(int i=0;i<(sizeof(arr)-1);i++)
		printf("%c",arr[i]);
    return 0;
}