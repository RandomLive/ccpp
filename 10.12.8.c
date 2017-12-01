#include <stdio.h>

int main(void)
{
    int ar[6] = {1, 2, 4, 8, 16, 32};
    printf("ar[3] = %d\n", ar[2]);

    int ar1[100] = {[99] = -1};
    printf("ar1[3] = %d\n", ar1[2]);

    int ar2[100] = {[3] = 101, [5] = 101, [10] = 101, 101, 101};
    return 0;
}
