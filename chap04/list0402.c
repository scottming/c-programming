#include <stdio.h>

int main(int argc, char const *argv[])
{
    int hand;

    do {
        printf("请选择出拳 [0...拳头/1...剪刀/2...布\n>> ");
        scanf("%d", &hand);
    } while (hand < 0 || hand > 2);

    printf("你选择了");
    // switch case 有个问题就是哪怕你乱输入也是会显示石头
    switch (hand) {
        case 0: puts("石头。"); break;
        case 1: puts("剪刀。"); break;
        case 2: puts("布。"); break;
    }

    return 0;
}