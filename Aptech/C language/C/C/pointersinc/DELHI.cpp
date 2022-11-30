#include <stdio.h>
#include <conio.h>
int main()
{						  //*kdr = D ; kdr=100;
	char *city = "DELHI"; //*city is a string value is "DELHI"
	char *kdr = city;	  //  &city[0]
	while (*kdr != '\0')  //*kdr is value
	{
		printf("%c is stored at address %u \n", *kdr, &kdr); /// There is a mistake with & it will print the kdr address not it's value
		kdr++;												 // only pointer name it will be address it's mean &kdr++;
	}
	printf("Press enter to exit... \n");

	getch();
	return 0;
}

/*
	char type pointer *city = "delhi" it's mean *city[0]=d the first letter or charecter
	char *kdr will store the value of city
	string can be treated as charecter pointer *city="Delhi"

*/

/*
//alrogithm  of this program

pointer type character variable name is *city and value is DELHI //*city="DELHI";
pointer type character name *kdr which will store address of city //*kdr=&city //&city=[0]to &city[4]
now while (pointer *kdr not = \0)
{
	do this program
	printf("%c mean first character of pointer *city is stored at address %u mean unassigned integer value",*kdr,&kdr)
}
*/
