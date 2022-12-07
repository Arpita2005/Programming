#include<stdio.h>
#include<conio.h>
int main()
{
    char *name[5];
    int i=0;
    for(i=0;i<5;i++)
    {
    printf("PLease enter the %d name:\n",i+1);
    //scanf("%[^\n]c",&name[i]);
    //fgets(*name,5,stdin);
    gets(&name[i]);
    printf("%s",name[i]);
    }
    getch();
    return 0;
}