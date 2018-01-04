#include <stdio.h>

int main(void) {
    printf("starting now:\n");
    one_three();
    printf("three\n");
    return 0;
}

int one_three(void) {
    printf("one\n");
    two();
    return 0;
}

int two(void) {
    printf("two\n");
    return 0;
}
