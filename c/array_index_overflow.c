#include <stdio.h>

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int j = 0; j < 10; j ++) {
        printf("%d\n", j);
    }
    // 数组下标溢出
    printf("%d\n", arr[10]);
    printf("%d\n", arr[220]);
    return 0;
}
