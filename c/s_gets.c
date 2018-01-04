#include <stdio.h>
#include <stdlib.h>

char * s_gets1(char *, int);

int main(void)
{
    char str[10];
    s_gets1(str, 10);
    printf("%s\n", str);

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\0') {
            i ++;
        }
        if (st[i] == '\n') {
            st[i] = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return st;
}

char * s_gets1(char * ret_val, int n)
{
    int i = 0;
    char ch = getchar();
    while(ch != '\n' && ch != '\0' && i < n) {
        // 在这里检查输入的字符
        ret_val[i] = ch;
        ch = getchar();
        i ++;
    }
    return ret_val;
}
