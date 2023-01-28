//  Write a c program to accept book details for books as book_title, author, publisher and cost. Assign the accession number to each book in increasing order. Display these details as,
// 1. Books of a specific author
// 2. Books by a specific Publisher
// 3. All Books costing Rs. 500 and above.
// 4. All Books.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct emp
{
    char book_name[100],author[100],publisher[100];
    int price;
}l;
int main()
{
    int num,select,i;
    printf("Enter  how much book's details you want to entry ?\n");
    scanf("%d",&num);
    l b[num];
    printf("Details of All Books:\n");
    for(i=0;i<num;i++)
    {
        printf("Book Number %d\n",i+1);
        printf("Enter Book Name:\n");
        fflush(stdin);
        gets(b[i].book_name);
        printf("Enter Author Name:\n");
        fflush(stdin);
        gets(b[i].author);
        printf("Enter Publisher's Name:\n");
        fflush(stdin);
        gets(b[i].publisher);
        printf("Enter The Price:\n");
        scanf("%d",&b[i].price);
    }
    while(1)
    {
        printf("What Topic You Want to select ?\n1.Books of a specific Author\n2. Books By a specific Publisher\n3. All Books costing Rs. 500 and above\n4.Details Of all Books\n5. Exit\n");
        scanf("%d",&select);
        printf("\n.............\n")
        if(select==1)
        {
            char au_n[100];
            printf("Books Of a Specific Author ");
            printf("\n===================\n");
            printf("Enter which author's book details you want to view ?\n");
            fflush(stdin);
            gets(au_n);
            for(i=0;i<num;i++)
            {
            if(au_n==b[i].author)
            {
                printf("Book Details is:\n");
                printf("Book Name:%s",b[i].book_name);
                printf("\nPublisher is:%s",b[i].publisher);
                printf("\nPrice is:%d",b[i].price);
            }
            
       else if(select==2)
       {
        char pb_n[100];
        printf("Books By a Specifiic Publisher \n");
        printf("====================\n");
        printf("Enter the publisher's Name:\n");
        fflush(stdin);
        gets(pb_n);
        for(i=0;i<num;i++)
        {
            if(pb_n==b[i].publisher)
            {
                printf("Book Details is:\n");
                printf("Book Name:%s",b[i].book_name);
                printf("\nAuthor is:%s",b[i].author);
                printf("\nPrice is:%d\n",b[i].price);
            }
        }
       }
       else if(select==3)
       {
        printf("All Books Costing Rs 500 and above :\n");
        printf("+====================================+\n");
        for(i=0;i<num;i++)
        {
            if(b[i].price>=500)
            {
                printf("Book Name:%s\n",b[i].book_name);
                printf("Author Name is:%s",b[i].author);
                printf("\nThe publisher is:%s",b[i].publisher);
                printf("\nPrice is:%d\n",b[i].price);
            }
        }
       }
       else if(select==4)
       {
        printf("Details are:\n");
        printf("Your Book Name is:%s",b[i].book_name);
        printf("\nYour Author Name is:%s",b[i].author);
        printf("\nYour The publisher is:%s",b[i].publisher);
        printf("\nYour Price is:%d",b[i].price);
        printf("\n=======================\n");
       }
       else if(select==5)
       {
         exit(1);
       }
       else
       {
        printf("Sorry You have entered wrong option\n");
       }
     }
    }
    getch();
    return 0;
}
}
