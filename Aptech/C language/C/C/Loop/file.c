#include<stdio.h>
int main()
{
	FILE *fp;
	//FILE *f;
	fp=fopen("C:\\Windows\System32\config\SAM","r");
	char ch;
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		{
				break;
		}
		else
		{
			printf("%c\n",ch);
		}
	}
	//while(f=())
	fclose(fp);
	return 0;
}
