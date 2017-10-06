#include <stdio.h>

int main(void) {
    int age;
    printf("Please input your age:\n");
    scanf("%d", &age);
    printf("You have live %d days\n", age * 365);
    return 0;
}
