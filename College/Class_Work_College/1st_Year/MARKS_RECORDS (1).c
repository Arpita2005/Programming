#include<stdio.h>
#include<conio.h>
#define SIZE 3
#define SUB 4
typedef struct Student_Mrecord{
    char name[50],course[10];
    int marks[SUB],total;
}SM;
SM student[SIZE];
void print_details(int count){
    printf("\nDetails of student %d\n",count+1);
    printf("The name of the student is: ");
    puts(student[count].name);
    printf("The course of the student is: ");
    puts(student[count].course);
    printf("The total marks of the student is: %d\n",student[count].total);
}
void get_details_min_max(){
    SM temp;
    int i;
    for(i=0;i<SIZE;i++){
        for(int j=i+1;j<SIZE;j++){
            if(student[i].total > student[j].total){
                temp=student[i];
                student[i]=student[j];
                student[j]=temp;
            }
        }
    }
    i=SIZE-1;
    while(i!=1){
        print_details(i);
        i=(i+1)%SIZE;
    }
}
int main(int argc, char *argv[]){
    for(int i=0;i<SIZE;i++){
        printf("Enter the Name of student %d\n",i+1);
        fflush(stdin);
        gets(student[i].name);
        printf("Enter the Course of student %d\n",i+1);
        fflush(stdin);
        gets(student[i].course);
        printf("Enter the Marks of the student %d\n",i+1);
        student[i].total = 0;
        for(int j=0;j<SUB;j++){
            scanf("%d",&student[i].marks[j]);
            student[i].total += student[i].marks[j];
        }
    }
    get_details_min_max();
    getch();
return 0;
}