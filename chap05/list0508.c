#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    int x[7];


    for (int i = 0; i < 7; ++i)
    {
        printf("x[%d]:\n", i);
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < 3; i++)  // ++i 和 i++ 其实在这里都一样的，因为表达式里面又没用到递增或递减后的值
        // 有一点不理解的是，如果在循环里面也用 i++ 为何打印不出来全部的值
    {
        int temp = x[i];
        x[i] = x[6 - i];
        x[6 - i] = temp;

    }

    puts("倒序排列了。");
    for (int i = 0; i < 7; ++i)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }

    return 0;
}