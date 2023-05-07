void text_to_morse(char inp[100])
{
    char code[40][40]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    char letter[30]={"abcdefghijklmnopqrstuvwxyz"};
    char letterA[30]={"A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z"};
    printf("Text To Morse Code Converter \n");
      
    for(int i=0;i<strlen(inp);i++)
    {
           if(inp[i]==letter[i]||inp[i]==letterA[i])
           if(inp[i]==strlen(letter[i]))

            {
               printf("%s",code[i]);
            }
           else
            {
                printf("Wrong input\n");
            }
    }
}
// void morse_to_text(char input[100])
// {
//     char code1[10][26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
//     char letter1[]={"abcdefghijklmnopqrstuvwxyz"};
//     printf("Morse Code To Text Converter \n");
      
//     for(int i=0;input[i]!='\0';i++)
//     {
//            if(toupper(input[i]==code1[i]))

//             {
//                printf("%s",letter1[i]);
//             }
//            else
//             {
//                 printf("Wrong input\n");
//             }
//       }
// }