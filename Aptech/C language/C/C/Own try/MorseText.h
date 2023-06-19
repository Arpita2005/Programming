#include<string.h>
void text_to_morse(char inp[100])
{
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
        {"--.."}};

    char letterA[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    printf("%c", letterA[1]);
    printf("\nText To Morse Code Converter \n");

    printf("Give Your Input :\n");
    scanf("%s", inp);
  for (int i = 0; i < strlen(inp); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (inp[j] == letterA[i])
            {
                printf("%s", code[j]);
                i=0;
            }
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
        {"--.."}};
    char letter1[30] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    printf("Morse Code To Text Converter \n");

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (toupper(input[i] == code[i]))

        {
            printf("%s", letter1[i]);
        }
        else
        {
            printf("Wrong input\n");
        }
    }
}