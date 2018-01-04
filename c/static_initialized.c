#include <stdio.h>

int main(void)
{
    int i;
    static int j;
    printf("i: %d j: %d\n", i, j);
    return 0;
}
