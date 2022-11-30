#include<stdio.h>
#include<string.h>
#include<dirent.h>
struct A
{
    char name[30];
	int d;
	float sal;
};
void dis();
int re();
void data();
void input(struct A);
int main()
{
	struct A a;
	input();
}
void input(struct A b)
{
	mkdir("C:\\Desktop\\SHIVAYAN");
	FILE *fp;
	fp=fopen("C:\\Desktop\\SHIVAYAN\\data.txt");
	printf("Enter a name:");
	gets(b->name);
	printf("Enter a salare:");
	scanf("%f",b->sal);	
}
int re()
