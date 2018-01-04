#include <stdio.h>

int main(void)
{
    int *ptr;
    int torf[2][2] = {12, 14, 16};
    ptr = torf[0];

    printf("*ptr = %d *(ptr + 2) = %d\n", *ptr, *(ptr + 2)); // 12 16


    int fort[3][2] = { {12}, {14, 16}, {80, 90} };
    ptr = fort[0];
    printf("*ptr = %d *(ptr + 2) = %d\n", *ptr, *(ptr + 2)); // 12 16
    printf("fort[2] = %d\n", fort[2][0]);

    return 0;
}
