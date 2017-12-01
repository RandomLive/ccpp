#include <stdio.h>

void handle_trots(double trots[20]);
void handle_trots_vla(int n, double[n]);

void handle_clops(short clops[10][30]);
void handle_clops_vla(int m, int n, short clops[m][n]);

void handle_shots(long shots[5][10][15]);
void handle_shots_vla(int m, int n, int j, long shots[m][n][j]);

int main(void)
{
    double trots[20] = {0.0};
    short clops[10][30];
    long shots[5][10][15];

    handle_trots(trots);
    handle_trots_vla(20, trots);

    handle_clops(clops);
    handle_clops_vla(10, 30, clops);

    handle_shots(shots);
    handle_shots_vla(5, 10, 15, shots);

    return 0;
}

void handle_trots(double trots[20])
{

}

void handle_trots_vla(int n, double trots[n])
{

}

void handle_clops(short clops[10][30])
{

}

void handle_clops_vla(int m, int n, short clops[m][n])
{

}

void handle_shots(long shots[5][10][15])
{

}

void handle_shots_vla(int m, int n, int j, long shots[m][n][j])
{

}
