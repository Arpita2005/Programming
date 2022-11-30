#include <stdio.h>
int main()
{
    int i;
aa:
    printf("Put any number & (Press -1 to quit): ");

    while (i <= 100)
    {
        scanf("%d", &i);
        if (i == -1)
        {
            break;
            goto aa;
        }
        printf("You have entered %d", i);
        break;
    }

    return 0;
}
/*
    #include <stdio.h>
int main()
{
    int i;
    aa: printf("Put any number & (Press -1 to quit): ");

    while (i <= 100)
    {
        scanf("%d", &i);
        if (i == -1)
        {
            break;
            goto aa;
        }
        printf("You have entered %d", i);
        break;
    }

    return 0;
}
*/