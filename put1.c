#include <stdio.h>

void put1(const char * string);

int main(void)
{
    char name[] = "hello world";
    put1(name);
    return 0;
}

void put1(const char * string)
{
    while(*string != '\0') {
        putchar(*string ++);
    }
}
