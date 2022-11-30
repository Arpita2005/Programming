#include<stdio.h>
#include<conio.h>
#include<windows.h> //used for Sleep in miliseconds
//  #include <unistd.h> //used for sleep in seconds
int main(){
	int h=0,m=0,s=0,ms=0,a;
	printf("PRESS '1' TO START STOPWATCH\n");
    printf("Press CTRL + C to cancel \n");
	scanf("%d",&a);
	while(a){
	    printf("\r %2d : %2d : %2d : %2d",h,m,s,ms);
	    ms++;
	    Sleep(1) ;
	    if(ms==100){
	    	s++;
	    	ms=0;
	    }
	    else if(s==59){
	    	m++;
	    	s=0;
	    	ms=0;
	    }
	    else if(m==59){
	    	h++;
	    	m=0;
	    	s=0;
	    	ms=0;
	    }
	    else if(h==24){
	    	h=0;
	    	m=0;
	    	s=0;
	    	ms=0;
	    }
	}
    printf("Press CRTL + C To stop");
    return 0;
}