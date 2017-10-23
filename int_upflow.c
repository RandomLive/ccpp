#include <stdio.h>

int main(void) {
    int age;
    age = 2147483647;
    printf("int is %d, upflow is %d\n", age, age + 100);
    return 0;
}
