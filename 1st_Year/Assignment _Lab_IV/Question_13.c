//Write a program in C to extract the substring from a given string.
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char input[300],search[300];
    int count=0,count1=0,i,j,flag;
    printf("Enter your input:\n");
    gets(input);  
    printf("Enter the substring:\n");
    gets(search);  
    while(input[count]!='\0')
    count++;
    while(search[count1]='\0')
    count1++;
    for(i=0;i<count-count1;i++)
    {
        for(j=i;j<i+count1;j++)
        {
            flag = 1;
            if(input[j]!=search[j-1])
            {
                flag =0;
                break;
            }
        }
        if(flag==1)
        break;
    }
    if(flag==1)
    {
        printf("%s is a substring\n",search[j]);
    }
    else
    {
        printf("%s is not a substring\n",search[j]);
    }
    // int start_num,end_num,i;
    // printf("Input the start number of the search element:\n"); 
    // scanf("%d",&start_num);
    // printf("Enter the end number of the search element:\n");
    // scanf("%d",&end_num);
    // while(i<end_num)
    // {
    //     input[i]=input[start_num+i-1];
    //     i++;
    // }  
    // input[i]!='\0';
    // printf("The extract part of the string is:%s\n\n",input[i]);
    getch();
    return 0;
}