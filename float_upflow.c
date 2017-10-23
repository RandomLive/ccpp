#include <stdio.h>

int main(void) {
    float salary = 1e37;
    printf("salary is %f, salary upflow is %f", salary, salary + 1000);
    return 0;
}
