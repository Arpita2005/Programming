//wap to take input of marks of student of four subject for 10 student as an array and output willbe who scord the highset and lowest
#include<stdio.h>
#include<conio.h>
#include<string.h>
# define SIZE 3
//#define SUB 4
typedef struct record
{
    char name[100];
    char course[10];
    int marks[4],total;
}student;


int addition(int c)
{
    student number_record[SIZE];
    int sum=0;
    int j,maximum=0,minimum=0;
    printf("Enter the  marks for four subjects:\n");
    for(j=0;j<=SIZE;j++)
        {
            scanf("%d",&number_record[a].marks[j]);
            sum=sum+number_record[a].marks[j]; 
        }
        number_record[a].total=sum;
     printf("Sum Of all numbers are: %d \n",sum);

    // for(int i=0;i<=SIZE;i++)
    // {
    //  if(sum>maximum)
    //  {
    //     maximum=number_record[i].marks;
    //  }
    // }
    //printf("Highest=%d",maximum);

}
void get_greater()
{
    
}
int main()
{
    student number_record[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        printf("Enter your name:\n");
        fflush(stdin);
        scanf("%c",&number_record[i].name);
        printf("Your Course is:\n");
        //scanf("%c",&number_record[i].course);
        fflush(stdin);
        gets(number_record[i].course);
        fflush(stdin);
         addition(i);
         printf("\n============================\n");
    }
    // for(int i=0;i>SIZE;i++)
    // {
    //     if()
    // }
        getch();
        return 0;

}
