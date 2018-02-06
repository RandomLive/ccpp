// author suxiaolin
#include <iostream>

int main()
{
    const int ARR_LEN = 8;
    int arr[ARR_LEN] = {2, 4, 6, 5, 3, 1, 2, 7};
    int bucket[ARR_LEN + 1] = {0};
    int sortedArr[ARR_LEN];

    for (int i = 0; i < ARR_LEN; i ++) {
        bucket[arr[i]] ++;
    }

    for (int i = 0, j = 0; i < ARR_LEN + 1; i ++) {
        for (int m = 0; m < bucket[i]; m ++) {
            sortedArr[j] = i;
            j ++;
        }
    }

    for (int i = 0; i < ARR_LEN; i ++) {
        std::cout << sortedArr[i] << std::endl;
    }

    return 0;
}
