#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double * ptd;
    int max;
    int number;
    int i = 0;

    puts("What is the maximum number of type double entries?");
    if (scanf("%d", &max) != 1) { // 获取输入数字的个数
        puts("Number not correctly entered -- bye.");
        exit(EXIT_FAILURE);
    }
    ptd = (double *) malloc(max * sizeof(double));
    if (ptd == NULL) { // 无法分配内存
        puts("Memory allocation failed. Goodbye.");
        exit(EXIT_FAILURE);
    }
    puts("Eter the values (q to quit):");
    while (i < max && scanf("%lf", &ptd[i]) == 1) { // 获取double数字并存入ptd
        ++i;
    }
    printf("Here are your %d entries:\n", number = i);
    for (i = 0; i < number; i ++) {
        printf("%7.2f ", ptd[i]);
        if (i % 7 == 6) {
            putchar('\n');
        }
    }
    if (i % 7 != 0) {
        putchar('\n');
    }
    puts("Done.");
    free(ptd);

    return 0;
}
