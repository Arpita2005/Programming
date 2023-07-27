#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct book
{
    char book_name[500];
    int price;
    char author_name[50];
}details;

#define SIZE 2
int main()
{
        details classwork[SIZE];
        for(int i=0;i<SIZE;i++)
        {
            printf("Enter the book name:\n");
            gets(classwork[i].book_name);
            printf("Enter the price:\n");
            scanf("%d",&classwork[i].price);
            printf("Enter the Author name:\n");
            //scanf("%s",classwork[i].author_name);
            //scanf("%[^\n]s",classwork[i].author_name);
            //fgets(classwork[i].author_name,50,stdin);
            fflush(stdin);
            gets(classwork[i].author_name);
        }
        for(int i=0;i<SIZE;i++)
        {
            printf("The %d book details are:\n",i+1);
            printf("=============================\n");
            printf("Your  book name is:%s\n",classwork[i].book_name);
            printf("Your price is:%d\n",classwork[i].price);
            printf("The Author's name is:%s\n",classwork[i].author_name);
        }

        getch();
        return 0;
}
