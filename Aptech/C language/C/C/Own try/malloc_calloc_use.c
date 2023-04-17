#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    char *name;
    int size;
    printf("Enter how much character input you want to take :\n");
    scanf("%d",&size);
    name=(char*)malloc(size*sizeof(char));
    for(int i=0;i<size;i++)
    {
        printf("Enter %d element at index no :%d\n",i+1,i+1);
        gets(name);
    }

    for(int i=0;i<size;i++)
    {
        printf("The %d element is :%c",i+1,name);
    }
    getch();
    return 0;
}