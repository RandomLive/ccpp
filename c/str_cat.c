#include <stdio.h>
#include <string.h>
#define SIZE 80
char * s_gets(char * st, int n);

int main(void)
{
    char flower[SIZE];
    char addon [] = "s smell like old shoes.";

    puts("Waht is your favorite flower?");
    if (s_gets(flower, SIZE)) {
        printf("addon pointer before is %zd\n", addon);
        printf("flower pointer before is %zd\n", flower);
        strcat(flower, addon);
        printf("flower pointer after is %zd\n", flower);
        printf("addon pointer after is %zd\n", addon);
        puts(flower);
        puts(addon);
    } else {
        puts("End of file encountered!");
    }
    puts("bye");

    return 0;
}

char * s_gets(char *st, int n)
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
            while(getchar() != '\0') {
                continue;
            }
        }
    }
    return ret_val;
}
