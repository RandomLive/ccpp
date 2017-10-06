#include <stdio.h>

int main(void)
{
    printf("Please input your download speed: \n");
    float speed;
    scanf("%f", &speed);
    float filesize;
    printf("Please input your download filesize: \n");
    scanf("%f", &filesize);
    float downloadtime;
    downloadtime = filesize / (speed / 8);
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.", speed, filesize, downloadtime);
    return 0;
}
