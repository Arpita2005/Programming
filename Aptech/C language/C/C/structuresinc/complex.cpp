#include <stdio.h>
#include<conio.h>
typedef struct complex
{
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2);

int main()
{
    complex n1, n2, temp;
    printf("For 1st complex number \n");
    printf("Enter real and imaginary respectively:\n");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter real and imaginary respectively:\n");
    scanf("%f %f", &n2.real, &n2.imag);
    temp = add(n1, n2);
    printf("\n%.1f+%.1fi\n", n1.real, n1.imag);
    printf("\n   +  \n");
    printf("\n%.1f+%.1fi", n2.real, n2.imag);
    printf("\n=================\n");
    printf("\n%.1f+%.1fi", temp.real, temp.imag);
    getch();
    return 0;
}
complex add(complex n1, complex n2)
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
