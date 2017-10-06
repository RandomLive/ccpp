#include <stdio.h>

int main(void)
{
    const int num = 100;
    printf("Your const int is %d\n", num);
    printf("Then I will edit the const number\n");
    // num = 101; this will occur a error
    return 0;
}
