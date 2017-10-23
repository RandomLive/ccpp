#include <stdio.h>

int main(void) {
    printf("请输入英寸：\n");
    int inch;
    scanf("%d", &inch);
    float cm = inch * 2.54;
    printf("等于%.2f厘米", cm);
}
