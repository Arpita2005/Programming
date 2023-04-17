//Formula = -b+-sqrt(b2-4ac)/2a withour using library-function

#include<stdio.h>
#include<math.h>
#include<conio.h>
int root_fun(int f);
int main()
{
    int number,a,b,c;
    float root1,root2;
    
    printf("Enter The Value Of a :\n");
    scanf("%d",&a);
    printf("Enter The Value Of b :\n");
    scanf("%d",&b);
    printf("Enter The Value Of c :\n");
    scanf("%d",&c);

    number=(pow(b,2)-4*a*c);

    printf("The number part that we have to make the root: %d\n",number);
    printf("\n=====================================\n\n");
    root1=-b+root_fun(number)/2*a;
    printf("The result with +  is : %.2f\n\n",root1);

    root2=-b-root_fun(number)/2*a;
    printf("The result with -  is : %.2f\n",root2);

   getch();
  return number;
}
int root_fun(int f)
{
     float sqrt = f / 2;   //4/2
    float temp = 0;
    while(sqrt != temp)  //2!0
    {
        temp = sqrt;  //0=2
        sqrt = ( f/temp + temp) / 2; //  (4/2+2)/2
    }

    printf("The square root of '%d' is '%.2f'\n", f, sqrt); // Ans is : 2
    return sqrt;
    getch();
}
