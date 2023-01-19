#include<stdio.h>
#include<conio.h>
int main ()  
{  
    // declare the character type array  
    char first[30], second[30];  
    int len1, len2, num, i, j, found = 0, not_found = 0;  
    len1 = strlen (first);  
    len2 = strlen (second);  
      
    // use if statement to check the length is equal or not  
    if (len1 == len2)  
    {  
        num = len1; // assign the length to num variable  
        for ( i = 0; i < num; i++)  
        {  
            found = 0;  
            for ( j = 0; j < num; j++)  
            {  
                // check string is equal or not  
                if (arr1[i] == arr2[j])  
                {  
                    found = 1;  
                    break;  
                }  
            }  
              
            if (found == 0)  
            {  
                not_found = 1; // assign 1 to not_found  
                break;  
            }  
        }  
        if (not_found == 1)  
            printf (" \n The first string is not an anagram of the second string. ");  
        else  
            printf (" \n The first string is an anagram of the second string. ");     
    }  
    else  
        printf (" \n Both string must contains same number of character to be the anagram of string. ");  
          
    return 0;     
}  