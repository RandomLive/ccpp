#include <stdio.h>

void increaseAge(void);

int age = 1;

int main(void)
{
    printf("age : %d\n", age);
    increaseAge();
    printf("age : %d\n", age);
    return 0;
}
