#include <stdio.h>

void show(const double ar[], int n);
void show2(const double ar2[][3], int n);

int main(void)
{
    show((const double[4]){8, 3, 9, 2}, 4);

    const double (*ptr)[3];
    ptr = (const double[][3]){ {8, 3, 9}, {5, 4, 1} };
    show2(ptr, 2);
    return 0;
}

void show(const double ar[], int n)
{

}

void show2(const double ar2[][3], int n)
{

}
