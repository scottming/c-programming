#include <stdio.h>

int main(void)
{
    int vx, vy;

    vx = 10;
    vy = 3;

    printf("vx * vy = %d\n", vx * vy);
    printf("vx / vy = %d\n", vx / vy);  // 这样输出的也是一个整数 3

    return 0;
}