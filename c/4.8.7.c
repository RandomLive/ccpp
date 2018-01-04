#include <stdio.h>
#include <float.h>

int main(void)
{
    double db = 1.0/3.0;
    printf("db first time: %.6f\n", db);
    printf("db first time: %.12f\n", db);
    printf("db first time: %.16f\n", db);
    float ft = 1.0/3.0;
    printf("ft first time: %.6f\n", ft);
    printf("ft first time: %.12f\n", ft);
    printf("ft first time: %.16f\n", ft);

    printf("FLT_DIG is %d\n", FLT_DIG);
    printf("DBL_DIG is %d\n", DBL_DIG);
    return 0;
}
