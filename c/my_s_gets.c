#include <stdio.h>
#include <string.h>

char * s_gets(char * st, int n);

int main(void)
{
    char st[20];
    s_gets(st, 20);
    puts(st);
    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val, * is_find_enter;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        is_find_enter  = strchr(st, '\n');
        if (is_find_enter) {
            *is_find_enter = '\0';
        } else {
            for (;getchar() != '\n';) {
                continue;
            }
        }
    }

    return ret_val;
}
