#include <stdio.h>
// calculate power using loop
int main()
{
    int p;
    float base, power, power2, prod_index = 1.0;
    printf("\n Enter base & power : ");
    scanf("%f %f", &base, &power);
    if (power >= 1)
    {
        for (p = 1; p <= power; p++)
        {
            prod_index *= base;
        }
    }
    else if (power < 0)
    {
        power2 = -power;
        for (p = 1; p <= power2; p++)
        {
            prod_index *= base;
        }
        prod_index = (float)(1 / prod_index);
    }
    else if (power == 0)
    {
        prod_index = 1;
    }
    printf("\n The result = %.2f", prod_index);

    return 0;
}