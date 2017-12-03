#include <stdio.h>

int main(void)
{
    char line[9];
    while(fgets(line, 9, stdin)) {
        fputs(line, stdout);
    }
    return 0;
}
