/* 
	确认 switch case 的动作顺序
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sw;

    printf("integer: >> ");
    scanf("%d", &sw);

    switch(sw) {
        case 1: puts("A"); puts("B"); break;
        case 2: puts("C");  // 这里会打印 C D，说明没有 break 则往下执行
        case 5: puts("D"); break;
        case 6:  // 同样的，这里会把 E 打印出来
        case 7: puts("E"); break;
        default : puts("F"); break;  // 这里的 break 注释掉，是一样的结果。但为了灵活，还是加上的好
    }

    return 0;
}
