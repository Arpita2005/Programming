// Farenhite to celcius 

#include<stdio.h>
#include<conio.h>
int main()
{
    float f,c;
    printf("Give the tempareture in Farenhite :\n");
    scanf("%f",&f);
    printf("\n=================================\n");
    c=(f-32)*0.56;
    printf("After converting to celcius the temparature is :%f",c);
    getch();
    return 0;
}