#include <stdio.h>

int main(void) {
    int age = -2147483648;
    printf("int is %d, downflow is %d\n", age, age - 100);
    return 0;
}
