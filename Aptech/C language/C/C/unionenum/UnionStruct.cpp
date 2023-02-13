#include<stdio.h>
#include<conio.h>
union id 
{
      char name[40];
      int number;
};
struct 
{ 
      int salary;
      union id description;
}student;

int main()
{
   
    printf("Size of Union= %d\n",sizeof(union id));
    student.description.number = 12;
    printf("First Value of number = %d\n",student.description.number);
    student.description.number = 32;
    printf("After Change Value of number = %d\n",student.description.number);
      getch();
    return 0;
}
