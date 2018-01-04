#include <stdio.h>

int put2(const char *);

int main(void)
{
    char *str = "hello world";
    put2(str);
    character_numbers = put2("pizza");
    printf("character numbers is :%d\n", character_numbers);
    return 0;
}

int put2(const char *string)
{
    int count = 0;
    while (*string) {
        putchar(*string ++);
        count ++;
    }

    return count;
}
