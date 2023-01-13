#include<stdio.h>
#include <conio.h>
int main()
{
    // int n;
    // char c;
    // short d;
    // long s;
    // signed l;
    // unsigned k;
//     printf("enter the name:\n");
//     scanf("%d%c%d%ld%d%u",&n,&c,&d,&s,&l,&k);
//    // printf(" all the value is ");
printf("The size of int is:%d byte\n",sizeof(int));
printf("The size of char is:%d byte\n",sizeof(char));
printf("The size of shote int is:%d byte\n",sizeof(short));
printf("The size of long is:%ld byte\n",sizeof(long));
printf("The size of signed int is:%d byte\n",sizeof(signed));
printf("The size of unsigned int is:%u byte\n",sizeof(unsigned));
 getch();
    return 0;
}
