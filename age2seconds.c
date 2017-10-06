#include <stdio.h>

int main(void) {
    printf("Please input your age: ");
    int age;
    scanf("%d", &age);
    float secondsOfYear = 3.156e7;
    printf("You have live %d seconds\n", (int) (age * secondsOfYear));
    return 0;
}
