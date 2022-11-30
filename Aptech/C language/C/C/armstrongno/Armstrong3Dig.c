#include<stdio.h>
int main()
{
    int number, originalNumber, remainder, result;    
    printf("\nArmstrong numbers\n========================\n");
    for(number=1;number<=100000;number++)
    { 
        result=0;
    	originalNumber = number;
    	while (originalNumber != 0)
    	{
        	remainder = originalNumber%10;
        	result += remainder*remainder*remainder;
        	originalNumber /= 10;
    	}
    	if(number == result)
        		printf("\n%d",number);
    }

    return 0;
}

