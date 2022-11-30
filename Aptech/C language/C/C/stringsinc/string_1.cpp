//Using scanf() to read a string
#include <stdio.h>
int main()
{
    char name[20];  //name is a string[] variable name
    printf("Enter name:   ");
    scanf("%s",name);  //to get string value use %s and to get in into a variable don't use & like others %f or %d
   //To get string value use ,variable name in scanf() && to print the string value use ,variable name in printf()
    printf("Your name is %s.", name);
    return 0;
}
