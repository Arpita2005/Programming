#include<stdio.h>
int main()
{
	int distance=664000,speed=332,time;
	float time_f;
	time=distance/speed;
	time_f=(float)time/(float)60;
	printf("\n The person hears the sound after %d seconds or %.2f minutes",time,time_f);
	
	return 0;
}
