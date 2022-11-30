#include<stdio.h>
#include<stdlib.h>
int main()
{
   char name[50];
   int marks,i,n;
   printf("Enter number of students: ");
   scanf("%d",&n);
   FILE *fptr;
   // a - append mode ( merge with previous data  in the file )
   fptr=(fopen("E:/student.txt","a"));
   if(fptr==NULL)
   {
       printf("Error!");
       exit(1);
   }
   for(i=1;i<=n;++i)
   {
      printf("For student%d\nEnter name: ",i);
      fflush(stdin);
      gets(name);
      printf("Enter marks: ");
      scanf("%d",&marks);
      fprintf(fptr,"\nName: %s & Marks=%d",name,marks);
   }
   fclose(fptr);
   return 0;
}
