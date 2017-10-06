#include <stdio.h>

int main(void) {
    printf("Enter a floating point value: ");
    float ft;
    scanf("%f", &ft);
    printf("fixed-point notation: %f\n", ft);
    printf("exponential notation: %e\n", ft);
    printf("p notation: %a\n", ft);
    return 0;
}
