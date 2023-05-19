void text_to_morse(char inp[100])
{
   
    char ch;
    int i = 0, j = 0;
    char code[][10] = {
        {".-"},
        {"-..."},
        {"-.-."},
        {"-.."},
        {"."},
        {"..-."},
        {"--."},
        {"...."},
        {".."},
        {".---"},
        {"-.-"},
        {"-.."},
        {"--"},
        {"-."},
        {"---"},
        {".--"},
        {"--.-"},
        {".-."},
        {"..."},
        {"-"},
        {"..-"},
        {"...-"},
        {".--"},
        {"-..-"},
        {"-.--"},
        {"--.."}
    };

    char letterA[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    printf("Text To Morse Code Converter \n");

    printf("Give Your Input :\n");
    scanf("%s",inp);

    for(int i=0;i<strlen(inp);i++)
    {
        if(inp[i]==letterA[i])
        {
           printf("%s ",code2[i]);
        }

    }
}

void morse_to_text(char input[100])
{
   char code[][10] = {
        {".-"},
        {"-..."},
        {"-.-."},
        {"-.."},
        {"."},
        {"..-."},
        {"--."},
        {"...."},
        {".."},
        {".---"},
        {"-.-"},
        {"-.."},
        {"--"},
        {"-."},
        {"---"},
        {".--"},
        {"--.-"},
        {".-."},
        {"..."},
        {"-"},
        {"..-"},
        {"...-"},
        {".--"},
        {"-..-"},
        {"-.--"},
        {"--.."}
   }
    char letter1[30]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    printf("Morse Code To Text Converter \n");

    for(int i=0;input[i]!='\0';i++)
    {
           if(toupper(input[i]==code1[i]))

            {
               printf("%s",letter1[i]);
            }
           else
            {
                printf("Wrong input\n");
            }
    }
}