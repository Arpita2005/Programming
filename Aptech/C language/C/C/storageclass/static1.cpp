#include<stdio.h>
#include<conio.h>
/* function declaration */
void func(void);
static int count = 8; /* global variable */
int main()
{
// {
// 	while(count--)
// 	{
// 		func();  
// 	}
// 	getch();
// 	return 0;
// }
// /* function definition */
// void func(void)
// {
// 	static int i = 5; /* local static variable */
// 	i++;
// 	printf("i is %d and count is %d\n", i, count);
// }
 while (count--)
{
	func();
}
getch();
return 0;
}
void func(void)
{
	static int i=6;
	i++;
	printf("%d and count is:%d\n",i,count);

}
