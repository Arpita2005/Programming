#include<stdio.h>
#include<conio.h>
int main()
{
 /* local variable definition */
    char grade;
    printf("\nInput your grade:    ");
    //scanf("%c",&grade);
    grade=getche();
    printf("\n");
	switch(grade)
	{
		case 'A':
			printf("Excellent!\n");
			break;
		case 'B':
	    case 'C':
	         printf("Well done\n");
	         break;
	    case 'D' :
			 printf("You passed\n");
			 break;
		case 'F' :
			printf("Better try again\n");
			break;
		default:
			printf("Invalid grade\n");
	}
    printf("Your grade is %c\n",grade);
    return 0;
}

