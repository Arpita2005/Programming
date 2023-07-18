//Write a program in C to read a string through keyboard and sort it.
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
        char arr[200],temp;
        int i,j,len;
        printf("Enter a Line:\n");
        gets(arr);
        printf("===========================\n");
        len=strlen(arr);
        for(i=0;i<len-1;i++)
        {
            for(j=i+1;j<len;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }

        }
        printf("The input after sorting will be:\n.............................\n%s",arr);
        getch();
        return 0;

}