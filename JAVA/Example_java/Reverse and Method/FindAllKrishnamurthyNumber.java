//import required classes and packages  
import java.io.*;   
import java.util.Scanner;  
  
//create FindAllKrishnamurthyNumber class to get all the Krishnamurthy number in a given range  
class FindAllKrishnamurthyNumber  
{  
    //main() method start  
    public static void main(String args[])  
    {  
        int range;  
        //create scanner class object  
        Scanner sc=new Scanner(System.in);   
        //show custom message  
        System.out.println("Enter the value of range");  
        //store user entered value into variable range  
        range = sc.nextInt();  
  
        for(int i = 1; i <= range; i++)  
            checkNumber(i);  
    }  
    // create fact() method to calculate the factorial of the number   
    static int fact(int number)   
    {   
        if (number == 0)      
            return 1;      
        else if(number<0)
            return -1;  
        else
	        return(number * fact(number-1));  
    }   
    // create checkNumber() method to check krishnamurthy number  
    static void checkNumber(int number)   
    {   
        int sum = 0;    //initialize sum to 0   
        int x;
        int tempNumber = number;    //create a copy of the original number   
          
        //perform operation until tempNumber will not equal to 0  
        while (tempNumber != 0) 
		{ 
            x=tempNumber%10;	
            // calculate the factorial of the last digit of the tempNumber and then add it to the sum  
            sum = sum + fact(x); 
            // replace the value of tempNumber by tempNumber/10   
            tempNumber = tempNumber / 10;   
        }     
        // Check whether the number is equal to the sum or not. If both are equal, the number is Krishnamurthy number  
        if(sum == number)  
            System.out.println(number + " is a krishnamurthy number");   
    }  
}  