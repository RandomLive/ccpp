#include <stdio.h>
#define TWO 2
#define OW "Consistency is the last refuge of the unimagina\
tive. - Oscar Wilde" /* 反斜杠把该定义延续到下一行 */

#define FOUR TWO * TWO
#define PX printf("x is %d.\n", x)
#define FMT "X is %d.\n"

int main(void)
{
    int x = TWO;

    PX;
    x = FOUR;
    printf(FMT, x);
    printf("%s\n", OW);
    printf("TWO: OW\n");
    return 0;
}
