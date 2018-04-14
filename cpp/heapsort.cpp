#include <iostream>

using namespace std;

void heapify(int [], int, int);

int main(int argc, char** argv)
{
    int n = 6;
    int arr[6] = {12, 11, 13, 5, 6, 7};

    for (int i = n / 2 - 1; i >=0; i--) {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--) {
        // 最大堆满足根节点是最大的值，将最大值放到数组末尾，把末尾的值放到根节点
        swap(arr[0], arr[i]);

        // 此时，又不满足最大堆的定义了，所以重新进行堆化
        heapify(arr, i, 0);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}

void heapify(int arr[], int n, int i)
{
    // i是当前的根节点，从i和i的两个子节点中选出最大的值放到i节点以满足最大堆的定义
    int largestIndex = i;
    int leftIndex = largestIndex * 2 + 1; // i的左节点的索引
    int rightIndex = largestIndex * 2 + 2; // i的右节点的索引

    // 如果左节点的值大于根节点i的值，则最大值的索引更新为左节点的索引
    if (leftIndex < n && arr[leftIndex] > arr[largestIndex]) {
        largestIndex = leftIndex;
    }
    // 如果右节点的值大于节点largestIndex的值，则最大值的索引更新为右节点的索引
    if (rightIndex < n && arr[rightIndex] > arr[largestIndex]) {
        largestIndex = rightIndex;
    }

    // 如果最大值不是根节点i了，就把最大值和根节点i的值进行交换
    if (largestIndex != i) {
        swap(arr[largestIndex], arr[i]);
        // 交换后i的子节点的树可能出现不满足堆的定义的值，所以需要对节点largestIndex进行重新堆化
        heapify(arr, n, largestIndex);
    }
}
