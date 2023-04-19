#include<stdio.h>
#include<time.h>
#include<conio.h>
int main()
{
    struct timespec remaining , request = {5,100};
    printf("Taking a Nap....\n");
    int response=nanosleep(&request,&remaining);
    if(response == 0)
    {
        printf("Nap is completed \n");
    }
    else
    {
        printf("Nap is not completed \n");
    }
    getch();
    return 0;
}
