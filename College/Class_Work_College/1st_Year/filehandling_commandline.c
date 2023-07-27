#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(int argc, char *argv[])
{
    FILE *ptr1,*ptr2;
    char ch;

    ptr1=fopen("file.txt","r");
    ch=getc(ptr1);
    if(ptr1==NULL)
    {
        printf("Can't open the file\n");
        exit(1);
    }
    while(ch!=EOF)
    {
        putchar(ch);
        ch=getc(ptr1);
    }
    ptr2=fopen("file1.txt","w");
    ch=getc(ptr2);
    if(ptr2==NULL)
    {
        printf("Can't open this file\n");
        exit(1);
    }
    while(ch!=EOF)
    {
        fputc(ch,ptr2);
        ch=getc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
    // ptr=fopen("file.txt","w");
    // ch=getc(ptr);
    // if(ptr==NULL)
    // {
    //     printf("Can't open the file\n");
    //     exit(1);
    // }
    // while(ch!=EOF)
    // {
    //     putchar(ch);
    //     ch=getc(ptr);
    // }
 getch();
 return 0;
}
