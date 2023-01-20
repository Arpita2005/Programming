//Structure of a book details with author name,price etc
#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct book
{
    char book_name[100],author_name[100];
    int price;
}s;
int main()
{
    int num;
    printf("Enter the number of Books:\n");
    scanf("%d",&num);
    s bk[num];
    for(int i=0;i<num;i++)
    {
        printf("Details %d\n",i+1);
        printf("=====================\n");
        printf("Enter the Name of Book:\n");
        fflush(stdin);
        gets(bk[i].book_name);
        printf("\n........................\n");
        printf("Enter the Price:\n");
        scanf("%d",&bk[i].price);
        printf("\n........................\n");
        printf("Enter the Author's Name:\n");
        fflush(stdin);
        gets(bk[i].author_name);
        printf("\n........................\n");
    }

    for(int i=0;i<num;i++)
    {
        printf("The details of %d book is\n",i+1);
        printf("The Name of Book is:\n%s",bk[i].book_name);
        printf("\nThe Price is:\n%d",bk[i].price);
        printf("\nThe Author Name is:\n%s\n",bk[i].author_name);
    }
    getch();
    return 0;
}