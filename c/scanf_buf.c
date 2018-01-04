#include <stdio.h>

int main(void)
{
    float value;
    char ch;
    scanf("%f", &value);
    while ((ch = getchar()) != '\n') { // 获取到换行符的内容，包括换行符
        putchar(ch);
    }
    return 0;
}
