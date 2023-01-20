


enum weekdays { Monday=1, Tueday, Wednessday, Thursday, Friday, Saturday, Sunday };

int main(){
	
	enum weekdays today;
	
	printf("Please enter the day of week:");
	scanf("%d",&today);
	
	if(today == Monday){
		printf("The color I like today is White.\n");
	}
	else if(today == Tueday){
		printf("The color I like today is Black.\n");
	}
	else if(today == Wednessday){
		printf("The color I like today is Blue.\n");
	}
	else if(today == Thursday){
		printf("The color I like today is Red.\n");
	}
	else if(today == Friday){
		printf("The color I like today is Green.\n");
	}
	else if(today == Saturday){
		printf("The color I like today is Yellow.\n");
	}
	else if(today == Sunday){
		printf("The color I like today is Violet.\n");
	}
	else{
		printf("The day is not correct.\n");
	}
}
