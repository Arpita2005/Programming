#include<stdio.h>
#include<conio.h>
int main()
{
    int row, coloumn, size;
    printf("Enter the size number :\n");
    scanf("%d",&size);
    for (row = size/2; row <= size; row = row+2)
    {
        for (coloumn = 1; coloumn < size-row; coloumn = coloumn+2)       
            printf(" ");
 
        for (coloumn = 1; coloumn <= row; coloumn++)
            printf("*");
  
        // FOR SPACE B/W PEAK-1 AND PEAK-2 : PART 3
        for (coloumn = 1; coloumn <= size-row; coloumn++)
            printf(" ");
         
        // FOR PRINTING PEAK-2 : PART 4
        for (coloumn = 1; coloumn <= row-1; coloumn++)
            printf("*");
 
        printf("\n");
    }
 
    /*FOR THE BASE OF HEART ie. THE INVERTED TRIANGLE */
 
    for (row = size; row >= 0; row--)
    {
        // FOR SPACE BEFORE THE INVERTED TRIANGLE : PART 5
        for (coloumn = row; coloumn < size; coloumn++)
            printf(" ");
 
        // FOR PRINTING THE BASE OF TRIANGLE : PART 6
        for (coloumn = 1; coloumn <= ((row * 2) - 1); coloumn++)
            printf("*");
 
        printf("\n"); 
    }
    getch();
    return 0;
}
