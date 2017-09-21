#include <stdio.h>

int main(void)
{
    int vx, vy; 
    int vz = 22; /* 初始化的时候就赋值 */

    vx = 1;
    vy = vx + 1;

    printf("vx is %d\n", vx);
    printf("vy is %d\n", vy);
    printf("vz is %d\n", vz);

    return 0;
}