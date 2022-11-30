#include<stdio.h>
struct s
{
	char name[50];
	int height;
};
int main()
{
    struct s a[5],b[5];   
    FILE *fptr;
    int i;
    fptr=fopen("file.txt","wb");
    for(i=0;i<3;++i)
    {
        fflush(stdin);
        printf("Enter name: ");
        gets(a[i].name);
        printf("Enter height: "); 
        scanf("%d",&a[i].height); 
    }
    fwrite(a,sizeof(a),1,fptr);
    fclose(fptr);
    fptr=fopen("file.txt","rb");
    fread(b,sizeof(b),1,fptr);
    for(i=0;i<3;++i)
    {
        printf("\n Name: %s & Height: %d",b[i].name,b[i].height);
    }
    fclose(fptr);
    return 0;
}
