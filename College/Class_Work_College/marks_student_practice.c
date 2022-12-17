//wap to take input of marks of student of four subject for 10 student as an array and output willbe who scord the highset and lowest
#include<stdio.h>
#include<conio.h>
#include<string.h>
# define SIZE 10
//#define SUB 4
typedef struct record
{
    char name[100];
    char course[10];
    int marks[4],total;
}student;
student number_record[SIZE];

int get_Marks(int c)
{
    // student number_record[SIZE];
    int sum=0,j;
    printf("Enter the  marks for four subjects:\n");
    for(j=0;j<=SIZE;j++)
        {
            scanf("%d",&number_record[c].marks[j]);
            sum=sum+number_record[c].marks[j]; 
        }
        number_record[c].total=sum;
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
void printdetails()
{
    int max=0,min=0;
    for(int i=0;i<SIZE;i++)
    {
        if(number_record[i].total>max){
            max=i;
        }
    }
    printf("The name of the student is:");
    puts(number_record[max].name);
    printf("\n");
    printf("The name of the course is:");
    puts(number_record[max].course);
    printf("\n");
    printf("%d ",number_record[max].total);
    for(int i=0;i<=SIZE;i++)
    {
        if(number_record[i].total<min){
            min=i;
        }
    }
    printf("The name of the student is:");
    puts(number_record[min].name);
    printf("\n");
    printf("The name of the course is:");
    puts(number_record[min].course);
    printf("\n");
    printf("%d ",number_record[min].total);
}
int main()
{
    // student number_record[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        printf("Enter your name:\n");
        fflush(stdin);
        gets(number_record[i].name);
        printf("Your Course is:\n");
        //scanf("%c",&number_record[i].course);
        fflush(stdin);
        gets(number_record[i].course);
        fflush(stdin);
        get_Marks(i);
        printf("\n============================\n");
    }
    printdetails();
    getch();
    return 0;

}
