#include <stdio.h>

int main(void) {
    // int 32位 2**32 short 16位 2**16
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n");
    printf("verybig = %lld and not %ld", verybig, verybig);

    return 0;
}
