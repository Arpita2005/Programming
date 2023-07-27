//wap to take a sentence and find how many words are there 

#include<stdio.h>
#include<conio.h>
void multiple_one_space();
int main()
{
    char sentence[100];
    printf("Enter the Sentence to count the words:\n");
    scanf("%[^\n]c",sentence);
    int count=1,i=0;
    while(sentence[i]!='\0')
    {
        // count=getch();
        if(sentence[i]==' ')// && (sentence[i+1] != ' ' ))//&& sentence[i-1]!='.'))
        {
            count++;  
        }
        i++;
        //  count++;
        //  i++;
    }
    
    printf("The number of words is %d",count);
    getch();
    return 0;
}
