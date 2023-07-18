// Write a menu driven program in &#39;C&#39; which shows the working of library. The menu
// option should be
// i) Add book details.
// ii) Display book details.
// iii) List all books of given author.
// iv) List the count of books in the library.
//  v) Exit.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct book
{
    char name[100];
    char writer[100];
    int price;
}s;
void input()
{
     int num=0,choose;
    s lb[num];
    // char choose_author[100];
    while(1)
    {
    printf("What do you want to do ??\n1. Add Book Details\n2. Display Book Details\n3. List all book of given author\n4. List the count of books in the library \n5. Exit\n");
    scanf("%d",&choose);
    if(choose==1)
    {
        //add();
         printf("How much book you want to add in your library ?\n");
         scanf("%d",&num);
         for(int i=0;i<num;i++)
    {
        printf("Book Number %d\n",i+1);
        printf("Enter the Book Name:\n");
        fflush(stdin);
        gets(lb[i].name);
        printf("Enter the Author Name:\n");
        fflush(stdin);
        gets(lb[i].writer);
        printf("Enter Book Price:\n");
        scanf("%d",&lb[i].price);
        printf("\n.................\n");
    }
    }
    else if(choose==2)
    {
       // show();
       for(int i=0;i<num;i++)
    {
        printf("Your Book name is:\n");
        puts(lb[i].name);
        printf("Author Name is:\n");
        puts(lb[i].writer);
        printf("The Price is:%d",lb[i].price);
    }
    }
    else if(choose==3)
    {
        //author();
        char author[100];
    printf("Which writer's books you want to see ?\n");
    fflush(stdin);
    gets(author);
    for(int i=0;i<num;i++)
    {
        if(author==lb[i].writer)
        {
            printf("The books name is:\n");
            puts(lb[i].name);
            printf("The price is:%d",&lb[i].price);
        }
    }
    }
    else if(choose==4)
    {
        printf("Number of books that you have in your library:%d\n",num);
    }
    else if(choose==5)
    {
        exit(0);
    }
    else
    {
        printf("Select correct option\n");
    }
    }
}

int main()
{
    input();
    getch();
    return 0;
}