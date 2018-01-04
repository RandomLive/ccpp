#include <stdio.h>

int main(void)
{
    printf("Please input a float: ");
    float ft;
    scanf("%f", &ft);
    printf("input %.1f or %.1e\n", ft, ft);
    printf("input %+.3f or %.1e\n", ft, ft);
    return 0;
}
