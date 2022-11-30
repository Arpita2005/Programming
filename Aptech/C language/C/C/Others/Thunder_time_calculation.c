/*A person was walking in the street. When hears the sound of the lighting. after how long, he 
heard the sound?
after the lighting.
{
    1/.The distance between the sky and the person is 6640000 meter
    2/. The speed of the sound is 332 meter /secound
    3/. Calculate the time in minutes
}
*/
#include<stdio.h>
int main()
{
    int distance=664000, speed=332, secound=60, person, x;
    x= (distance / speed);
    person = (x/secound);
    printf("The sound will reach the person in %d minutes", person);
    return 0;
}