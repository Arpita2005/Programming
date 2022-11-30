#include <stdio.h>
int main()
{
    int num, copy, digit, rev = 0; // num to get input
                                   // copy to copy the number from num variable
                                   // digit is to calculate copy%10
                                   // rev is to calculate rev*10+digit
                                   // Then copy = copy/10 and that is the answer

    printf("Enter a number to reverse : ");
    scanf("%d", &num); // num=123
    copy = num;        // copy=num=123
    while (copy != 0)  // copy can't be 0 either program will be close
    {
        digit = copy % 10;      // digit = 123%10=3  // % = reminder
        rev = rev * 10 + digit; // rev = 0*10 + 2 = 2
        copy /= 10;
    }
    printf("The Reverse Number is %d is %d", num, rev);

    return 0;
}