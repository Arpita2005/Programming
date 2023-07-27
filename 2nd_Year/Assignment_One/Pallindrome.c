#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char arr[50],arr1[50];
    int i,length=0;
    printf("Enter the Word :\n");
    gets(arr);
    length=strlen(arr);
    printf("The word is :%s\n",arr);
    for(int i=0;i<length/2;i++)
    {
       if(arr[i]!=arr[length-i-1])
       {
        printf("It is not a pallindrome word \n");
       }
       else
       {
        printf("It is a pallindrome word \n");
       }
    }
    getch();
    return 0;
    
}