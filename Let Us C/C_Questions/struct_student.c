//WAP to read the data of a student store it in a structure and display it
#include<stdio.h>
#include<conio.h>
typedef struct details 
{
   int roll,num1,num2,num3;
   char name[100],str[50];
   char class[10],sec,sub1[10],sub2[10],sub3[10];
}d;
int main()
{
    int num;
    char str1[20];
    d det[num];
    printf("Enter the number of students :\n");
    scanf("%d",&num);
    printf("Enter The Details \n.......................\n");
    for(int i=0;i<num;i++)
    {
        printf("Enter The Roll Number :\n");
        scanf("%d",&det[i].roll);
        printf("Enter The Name \n");
        gets(det[i].name);
        printf("Enter The Class :\n");
        gets(det[i].class);
        printf("Enter The Sec :\n");
        scanf("%c",&det[i].sec);
        printf("Enter The Stream : \n");
        gets(det[i].str);
        printf("Enter the first subject name :\n");
        gets(det[i].sub1);
        printf("Enter The marks :\n");
        scanf("%d",&det[i].num1);
        printf("Enter the second subject name :\n");
        gets(det[i].sub2);
        printf("Enter The marks :\n");
        scanf("%d",&det[i].num2);
        printf("Enter the third subject name :\n");
        gets(det[i].sub3);
        printf("Enter The marks :\n");
        scanf("%d",&det[i].num3);
        printf("\n||+++++++++++++++++++++++++++++++++||\n");
    }
    printf("The Details are :\n");
    for(int i=0;i<num;i++)
    {
        printf("The Roll Number is : %d\n",det[i].roll);
        printf("The Name is : %c\n",det[i].name);
        printf("The Class is : %c\n",det[i].class);
        printf("Enter The Sec : %c\n",det[i].sec);
        printf("The stream is : %c",det[i].str);
        printf("Average is : %d",det[i].num1+det[i].num2+det[i].num3);
        printf("\n||+++++++++++++++++++++++++++++++++||\n");
    }
    
    getch();
    return 0;
    // printf("ENter Yout Stream :\n");
    // gets(str1);
    // for(int i=0;i<num;i++)
    // {
    //     if(str1)
    // }


}
