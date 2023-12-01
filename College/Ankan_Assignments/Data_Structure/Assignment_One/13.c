// initial of name
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char name[50];
    printf("Enter the  full name: ");
    gets(name);
    /*
    int length =strlen(name);
     if (length <= 0)
        {
        printf(" Give me the name please \n");
        return 1;
        } // in case you doesnt input a valid name
    */
    printf("Initial of the name is  ");
    printf("%c",name[0]); // first letter does not have space at first
    for (i=0;i<length;i++)
    {
        if (name[i]==' ') // every time before the start of mid name or last name , there is a space , upon encountering that we will print the next letter
            {
            printf("%c",name[i + 1]);
            }
    }
    return 0;
}
