#include <stdio.h>
#include <string.h>
#include <conio.h>
struct library
{
    char title[100], name[100], flag[100];
    int page, Accession_Number_id, avl;
} b[100];
int data_entry();                     // to add some Book Details in data base
void data_base(int f);                // to view the Book Details from data base
void book_by_author(int f);           // to search book by author name
void book_by_title(int f);            // to search by book title
void book_by_Accession_Number(int f); // to search by accession number
void avl(int f);                      // to see the count of books and check availability
void list(int f);                     // to see the list according accession number
int main()
{
    int n = (-2);
    char operation, option;
    do
    {
        printf("\t\t\tBOOK LIBRARY\n\t\t\t============\n\n");
        printf("Press 1 to add some Book Details in data base\n");
        printf("Press 2 to take a view of Data Base\n");
        printf("Press 3 to search a book by Author Name\n");
        printf("Press 4 to search a book by Title\n");
        printf("Press 5 to search a book by Accession Number\n");
        printf("Press 6 to see the Count and Availability\n");
        printf("Press 7 to see the list accroding Accession Number\n");
        printf(" -> ");
        fflush(stdin);
        scanf("%c", &operation); // getting input what you want to do
        switch (operation)
        {
        case '1':
            n = data_entry(); // to add some Book Details in data base
            break;
        case '2':
            data_base(n); // to view the Book Details from data base
            break;
        case '3':
            book_by_author(n); // to search book by author name
            break;
        case '4':
            book_by_title(n); // to search by book title
            break;
        case '5':
            book_by_Accession_Number(n); // to search by accession number
            break;
        case '6':
            avl(n); // to see the count of books and check availability
            break;
        case '7':
            list(n); // to see the list according accession number
            break;
        default:
            printf("Entered input is invalid\n"); // when noting works
            break;
        }
        printf("Press 'y' to back to the main menu\nor,\nPress'n' to exit\n");
        fflush(stdin);
        scanf(" %c", &option); // getting the option to display the menu or exit
    } while (option == 'y');
    printf("\t\t\t***ENDED***");
    getch();
    return 0;
}
int data_entry() // to add some Book Details in data base
{
    int i, n;
    printf("Enter the book quantity\n");
    scanf("%d", &n);        // getting input of book numbers
    for (i = 0; i < n; i++) /// assining the book number
    {
        printf("Enter the details of %d book\n\n", i + 1);
        printf("Title - ");
        fflush(stdin);
        scanf("%s", &b[i].title); // getting input of book.title  into structure
        printf("Author Name - ");
        fflush(stdin);
        scanf("%s", &b[i].name); // getting input of book.name into structure
        printf("Total page - ");
        fflush(stdin);
        scanf("%d", &b[i].page); // getting input of book.total page into structure
        printf("publised In - ");
        fflush(stdin);
        scanf("%s", &b[i].flag); // getting input of book.published date into structure
        printf("Accession Number - ");
        fflush(stdin);
        scanf("%d", &b[i].Accession_Number_id); // getting input of book.accession number into structure
        printf("Availability - ");
        fflush(stdin);
        scanf("%d", &b[i].avl); // getting input of book.availability
    }
    return n; // returning the number of book numbers
}
void data_base(int f) // to view the Book Details from data base
{                     // passing the parameters from data_entry from switch case : 1 whre n= n = data_entry();
    int i;
    for (i = 0; i < f; i++) // where f= n = umber of books;
    {
        if (f != (-2)) // you can hold it as a negative number like -1 mean <0 = -1 to stop the loop
        {
            printf("Book details of %d book\n\n", i + 1);                // showing the book details
            printf("Title - %s\n", b[i].title);                          // showing the book title
            printf("Author Name - %s\n", b[i].name);                     // showing the book name
            printf("Total page - %d\n", b[i].page);                      // showing the book total page
            printf("publised In - %s\n", b[i].flag);                     // showing the book published in
            printf("Accession Number - %d\n", b[i].Accession_Number_id); // showing the book accession number
        }
    }
    if (f == (-2)) /// when your f is a negative number
    {
        printf("The Data Base is Empty\n");
    }
}
void book_by_author(int f) // to search book by author name
{
    int i;
    char j[20];
    if (f != (-2)) // when your f is not a negative number
    {
        printf("Enter the Author name\n");
        fflush(stdin);
        gets(j);                // getting the author name
        for (i = 0; i < f; i++) // checking the author name
        {
            int com = strcmp(b[i].name, j); // copying the author name into j and storing return value to com integer
            if (com == 0)                   // when your com value return with 0 (success)
            {
                // Showing the author name with other details
                printf("Book details of %d book\n\n", i + 1);
                printf("Title - %s\n", b[i].title); //Showing the book title
                printf("Author Name - %s\n", b[i].name); ///Showing the book name
                printf("Total page - %d\n", b[i].page); //Showing the book page number
                printf("publised In - %s\n", b[i].flag); ///Showing the book published in
                printf("Accession Number - %d\n", b[i].Accession_Number_id); //Showing the book accession number 
            }
        }
        if (f == (-2)) // when your f is a negative number
        {
            printf("The Data Base is Empty\n");
        }
    }
}
void book_by_title(int f) // to search by book title
{
    int i;
    char j[20];
    if (f != (-2)) // when your f is not a negative number
    {
        printf("Enter the Book Title\n");
        fflush(stdin);
        gets(j); //getting the book title
        for (i = 0; i < f; i++) //counting till the book numbers
        {
            int com = strcmp(b[i].title, j); //storing the book title to the j and storing the index number to the com
            if (com == 0) //// when your com value return with 0 (success)
            {
                printf("Book details of %d book\n\n", i + 1);
                printf("Title - %s\n", b[i].title); //Showing the book title
                printf("Author Name - %s\n", b[i].name); //showing the book name
                printf("Total page - %d\n", b[i].page); // showing the book number of pages
                printf("publised In - %s\n", b[i].flag); //showing the book published in
                printf("Accession Number - %d\n", b[i].Accession_Number_id); //showing the book accession number
            }
        }
    }
    if (f == (-2)) // when your f is a negative number
        printf("The Data Base is Empty\n");
}
void book_by_Accession_Number(int f) // to search by accession number
{
    int i, j;
    if (f != (-2)) // when your f is not a negative number
    {
        printf("Enter the Book Accession Number\n");
        fflush(stdin);
        scanf("%d", &j); //getting input of accession number
        for (i = 0; i < f; i++) //checking till f = number of books
        {
            if (b[i].Accession_Number_id == j) //when you accession id and your input is same
            {
                printf("Book details of %d book\n\n", i + 1);
                printf("Title - %s\n", b[i].title); //showing the  title of the book
                printf("Author Name - %s\n", b[i].name); //showing the name of the book
                printf("Total page - %d\n", b[i].page); //showing the number of pages
                printf("publised In - %s\n", b[i].flag); //showing the publised  the book
                printf("Accession Number - %d\n", b[i].Accession_Number_id); //showing the accession number of book
            }
        }
    }
    if (f == (-2)) // when your f is a negative number
        printf("The Data Base is Empty\n");
}
void avl(int f) // to see the count of books and check availability
{
    int i;
    if (f != (-2)) // // when your f is not a negative number
    {
        printf("The Count of Books is %d\n", f); //showing the number of books
        for (i = 0; i < f; i++) //counting till number of books
        {
            if (b[i].avl == 1) ///when any book data in entered then it's value is increase to 1  
                printf("Title - %s(Available)\n", b[i].title); //showing the title only when the book is available
            else
                printf("Title - %s(Not Available)\n", b[i].title); //either you data is not given so it will show
        }
    }
    if (f == (-2))  // when your f is a negative number
        printf("The Data Base is Empty\n");
}
void list(int f)  // to see the list according accession number
{
    int i, k = 0, g[100];
    if (f != (-2)) // when your f is not a negative number
    {
        // for (i = 0; i < f; i++) //counting till book numbers
        // {
        //     g[i] = b[i].Accession_Number_id; //storing the accession number to the g[]
        // }
        for (int j = 0; j < f; j++) //counting till number of books
        {
            for (i = 0; i < f; i++)//counting till number of books
            {
                // if (k < g[i]) //when the value of value of g[i] is greater than k ( mean accession number can't be 0)
                // {
                //     k = g[i]; //then storing the g[i] value to k
                // }
                if(k<b[i].Accession_Number_id)
                {
                    k=b[i].Accession_Number_id;
                }
            }
            for (i = 0; i < f; i++) //counting till number of books
            {
                if (k == g[i]) //now checking that is k is same as g[i]
                {
                    printf("Accession Number - %d\n", b[i].Accession_Number_id); //showing the book accession number
                    printf("Title - %s\n", b[i].title); //showing the book title
                    g[i] = 0; //now assigning the value of g[i] to 0
                    k = 0; //also assigning the value of k is 0
                    break;
                }
            }
            if (f == (-2)) //// when your f is a negative number
            {
                printf("The Data Base is Empty\n");
                break;
            }
        }
    }
}