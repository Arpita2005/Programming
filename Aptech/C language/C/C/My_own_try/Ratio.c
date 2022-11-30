#include <stdio.h>
#include <conio.h>
int main()
{
        int person, capital, i=1, ratio[i], L,total=0;
        printf("The number of persons are:\n");
        scanf("%d", &person);
        printf("The Capital is:\n");
        scanf("%d", &capital);
        for (i = 1; i <= person; i++)
        {
                printf("Ratio of person %d :\n",i);
                scanf("%d", &ratio[i]);
                total+=ratio[i];
        }
        for (i = 1; i <= person; i++)

        {
                L = ((capital*ratio[i]) / total);
                printf("Final Total for each persons are: %d\n",L);
        }
        getch();
        return 0;
}