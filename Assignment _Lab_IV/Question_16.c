//Write a programme in C to find the number of times a given word "the" appears in the given string.
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int count = 0, i, times = 0, t, h, e, space;
    char string[100];
 
    puts("Enter a string:");
    gets(string);
    while (string[count] != '\0')
    {
        count++;
    }
    for (i = 0; i <= count - 3; i++)
    {
        t =(string[i] == 't' || string[i] == 'T');
        h =(string[i + 1] == 'h' || string[i + 1] == 'H');
        e =(string[i + 2] == 'e'|| string[i + 2] == 'E');
        space =(string[i + 3] == ' ' || string[i + 3] == '\0');

        if ((t && h && e && space) == 1)
            times++;
    }
    printf("======================================\n");
    printf("Frequency of the word 'the' is %d\n", times);
    getch();
    return 0;
}

