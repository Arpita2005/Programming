#include <stdio.h>
#include <math.h>

int main()
{
    int number, originalNumber, remainder, result,n ;

    printf("\nArmstrong numbers\n========================\n");
    for(number=1;number<=100000;number++)
    { 
    	  result=0;
    	  n=0;
     	  originalNumber = number;         	  
     	  //Count no of digits in the number
    	  while(originalNumber != 0)
    	  {
        		originalNumber/= 10;
        		++n;
    	  }
         originalNumber = number;
         // Logic or code for armstrong numbers
         while(originalNumber != 0)
    	 {
        	remainder = originalNumber%10;
        	result += pow(remainder, n);
        	originalNumber /= 10;
    	 }
        //Check armstrong no
    	  if(result == number)
        		printf("\n%d",number);
    }
    return 0;
}
