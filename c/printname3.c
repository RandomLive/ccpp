#include <stdio.h>
#include <string.h>

int main(void)
{
    // 1. 编写一个程序，提示用户输入名和姓，然后以“名,姓”的格式打印出来。
    char name[40], surname[40];
    printf("Please input your name: ");
    scanf("%s", name);
    printf("Please input your surname: ");
    scanf("%s", surname);

    printf("%s %s\n", name, surname);
    printf("%*d %*d\n", (int) strlen(name), (int) strlen(name), (int) strlen(surname), (int) strlen(surname));
    printf("\n\n\n");
    printf("%s %s\n", name, surname);
    printf("%*d %*d\n", -(int) strlen(name), (int) strlen(name), -(int) strlen(surname), (int) strlen(surname));
    return 0;
}
