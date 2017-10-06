#include <stdio.h>

int main(void) {
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}

int jolly(void) {
    printf("For he' s a jolly good fellow!\n");
    return 0;
}

int deny(void) {
    printf("Which nobody can deny!\n");
    return 0;
}
