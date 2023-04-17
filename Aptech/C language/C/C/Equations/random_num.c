/// To Generate random numbers

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    srand(time(NULL));
    printf("The Numbers are :\n");
    for(int i=0;i<100;i++)
    {
        printf("%d\n",rand());
    }
    getch();
    return 0;
}

//The srand() function sets the starting point for producing a series of pseudo-random integers. If srand() is not called, 
//the rand() seed is set as if srand(1) were called at program start.