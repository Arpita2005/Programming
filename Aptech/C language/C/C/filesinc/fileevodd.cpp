#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *f1,*f2,*f3;
    int number,i;
    
    printf("Contents of DATA file\n\n");
    f1 = fopen("DATA.txt","w");  /* create a data file */
    printf("\n Enter any number: (-1 to stop)");
    for(i=1;i<=30;i++)
    {
        scanf("%d",&number);
        if(number==-1)
		    break;
        putw(number,f1); // putw - write integer data
    }
    fclose(f1);

    f1 = fopen("DATA.txt","r");
    f2 = fopen("ODD.txt","w");
    f3 = fopen("EVEN.txt","w");

    while((number = getw(f1)) != EOF) /* getw - Read integer Data from  file */
    {
    	//  EOF - End Of File
        if(number%2==0)
            putw(number,f3);
        else
            putw(number,f2);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    f2 = fopen("ODD.txt","r");
    f3 = fopen("EVEN.txt","r");

    printf("\n\nContents of ODD file \n\n");
    while((number = getw(f2)) != EOF)
        printf("%4d",number);

    printf("\n\nContents of EVEN file \n\n");
    while((number = getw(f3)) != EOF)
        printf("%4d",number);

    fclose(f2);
    fclose(f3);
    
    return 0;
}
