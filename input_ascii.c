#include <stdio.h>

int main(void) {
    char ch;
    printf("Please input a ascii number: ");
    printf("_\b");
    scanf("%d", &ch);
    printf("Yout input number ascii is %c\n", ch);
    return 0;
}
