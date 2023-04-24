#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
struct name 
{
   int a;
   char c[30];
};
int main()
{	
   struct name *ptr;
   int i,n;
   printf("Enter n: ");
   scanf("%d",&n);
   
  /* Allocates the memory for n structures with pointer ptr pointing to the base address. 
   ptr = (int*)malloc(n * sizeof(int));*/
   
   ptr=(struct name*)malloc(n*sizeof(struct name));

   if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else 
    {
  
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
    

        for(i=0;i<n;++i)
       {
            printf("Enter string and integer respectively:\n");
            scanf("%s %d",&(ptr+i)->c, &(ptr+i)->a);
       }
       printf("Displaying Infromation:\n");
       for(i=0;i<n;++i)
       printf("%s\t%d\t\n",(ptr+i)->c,(ptr+i)->a);
       free(ptr);

    }
    getch();
   return 0;
}
