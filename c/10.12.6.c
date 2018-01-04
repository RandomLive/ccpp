#include <stdio.h>

int main(void)
{
    int grid[30][100];
    int (*ptr)[];
    ptr = grid;
    printf("**grid = %d **ptr = %d grid[0][0] = %d\n", **grid, **ptr, grid[0][0]);
    return 0;
}
