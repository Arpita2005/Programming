//WAP in C language to store and print the details of 5 books(name, author's name and price) using array of structures.
#include<stdio.h>
#include<string.h>
#include<conio.h>
#define SIZE 1

typedef struct book
{
    char name[30];
    char author[30];
    int price;
}library;

int main(){
    // int size;
    library books[SIZE];

    for(int i=0;i<SIZE;i++)
    {
        printf("Please enter the book name: ");
         fflush(stdin);
          gets(books[i].name);


        printf("Please enter the author's name: ");
          fflush(stdin);
          gets(books[i].author);
        
        printf("Please enter the price: ");
        scanf("%d",&books[i].price);

    }

    for(int i=0;i<SIZE;i++)
    {
        printf("The book details are : \n");
        printf("Name:%s\n",books[i].name);
        printf("Author's name:%s\n",books[i].author);
        printf("Price:%d\n",books[i].price);
    }
    getch();
    return  0;
}