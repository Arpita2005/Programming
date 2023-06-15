void password(char p[100])
{
    char ch[100];
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

    printf("Enter Your Password ::\n");
    scanf("%s",ch);
    printf("\nAfter converting to morse code your password is :\n");
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]==letterA[i])
        {
           printf("%s ",code[i]);
        }

    }
}