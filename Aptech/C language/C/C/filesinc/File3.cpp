#include<stdio.h>
#include<stdlib.h>
int main()
{
   char name[50];
   int marks,i,n;
   printf("Enter number of students: ");
   scanf("%d",&n);
   FILE *fptr;
   fptr=fopen("E:/student.txt","w");
   if(fptr==NULL)
   {   	
       printf("Error!");
       exit(1);
   }
   for(i=1;i<=n;++i)
   {
      printf("For student%d\nEnter name: ",i);
      fflush(stdin);
      //scanf("%s",name);
      gets(name);
      printf("Enter marks: ");
      scanf("%d",&marks);
      fprintf(fptr,"\n Name: %s  &  Marks=%d",name,marks);
   }
   fclose(fptr);
   printf("\nFile is ready.....");
   return 0;
}
