//Automatic Grading System
//Grade Evaluation with comments 
#include<stdio.h>
#include<string.h> // strcpy() - to copy content into string/char array 
int main()
{
	int marks,gradeRange;
	char grade;
	char comment[20];
	
	printf("\nInput the marks:   ");
	scanf("%d",&marks);
	
	if(marks>=90 && marks<=100)
	   gradeRange=9; // O
	else if(marks>=80 && marks<=89)
	   gradeRange=8; // E
	else if(marks>=70 && marks<=79)
	   gradeRange=7; // A
	else if(marks>=60 && marks<=69)
	   gradeRange=6; // B
	else if(marks>=50 && marks<=59)
	   gradeRange=5; // C
	else if(marks>=40 && marks<=49)
	   gradeRange=4; // D
	else if(marks>=0 && marks<=39)
	   gradeRange=3; // F
	else if(marks>100)
	    gradeRange=1; // More than 100 - Invalid Grade - Grade = I
	
	switch(gradeRange)	
	{
		case 1: 
				strcpy(comment,"More than 100 - Invalid Grade");
		        grade='I';
		        break;
		case 3: 
				strcpy(comment,"Fail");
		        grade='F';
		        break;
		case 4: 
				strcpy(comment,"Below Average");
		        grade='D';
		        break;
		case 5: 
				strcpy(comment,"Average");
		        grade='C';
		        break;
		case 6: 
				strcpy(comment,"Good");
		        grade='B';
		        break;
		case 7: 
				strcpy(comment,"Very Good");
		        grade='A';
		        break;
		case 8: 
				strcpy(comment,"Excellent");
		        grade='E';
		        break;
		case 9: 
				strcpy(comment,"Outstanding");
		        grade='O';
		        break;	
		default:
				strcpy(comment,"Negative value - Invalid Grade");
		        grade='V';
		        break;	
			   
	}
	
	printf("\nGrade=%c,Comment=%s",grade,comment);
	
	return 0;
	
}
