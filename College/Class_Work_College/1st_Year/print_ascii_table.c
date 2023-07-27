//Print the ascii table with three coloumns 1.decimal 2.hexadecimal 3. Symbol
#include<stdio.h>
#include<conio.h>
int main()
{

    printf("The ASCII Table is :\n");
    printf("==============================\n");
    for(int i=1;i<=255;i++)
    {
       
        printf("%d\t%c\t%x\n",i,i,i);
    }
    getch();
    return 0;
}