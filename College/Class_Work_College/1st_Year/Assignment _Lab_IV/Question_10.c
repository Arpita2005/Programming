//Write a program in C to find maximum occurring character in a string.
#include<stdio.h>
#include<conio.h>
int main()
{  
    char string[100];
    printf("Enter your string:\n");
    gets(string);
    int i, j, min, max;
    int length = strlen(string);  
    char minChar = string[0], maxChar = string[0];  
    int freq[length];  
      
    for(i = 0; i < length; i++) 
    {  
        freq[i] = 1;  
        for(j = i+1; j < length; j++) 
        {  
            if(string[i] == string[j] && string[i] != ' ' && string[i] != '0') 
            {  
                freq[i]++;  
                string[j] = '0';  
            }  
        }  
    }  
      
    //Determine minimum and maximum occurring characters  
    min = max = freq[0];  
    for(i = 0; i < length; i++) 
    {  
          
        //If min is greater than frequency of a character   
        //then, store frequency in min and corresponding character in minChar  
        if(min > freq[i] && freq[i] != '0')
        {  
            min = freq[i];  
            minChar = string[i];  
        }  
        //If max is less than frequency of a character   
        //then, store frequency in max and corresponding character in maxChar  
        if(max < freq[i]) 
        {  
            max = freq[i];  
            maxChar = string[i];  
        }  
    }  
      
    printf("Minimum occurring character: %c\n", minChar);  
    printf("Maximum occurring character: %c", maxChar);  
    getch();   
    return 0;  
}  
