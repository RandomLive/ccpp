#include <stdio.h>

int main(void) {
    float salary = 1e-37;
    printf("salary is %f, salary downflow is %f", salary, salary - 1e5);
    return 0;
}
