#include <stdio.h>

#define NUMBER 6  // 对象式宏，有点像 Python 的全局变量，但不确定

int main(int argc, char const *argv[])
{
    int i;
    int tensu[NUMBER];
    int sum = 0;

    printf("请输入 %d 名学生的分数。\n", NUMBER);
    for (i = 0; i < NUMBER; i ++) {
        printf("%2d 号：", i + 1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }


    printf("Count: %5d\n", sum);
    printf("Average: %5.1f\n", (double)sum / NUMBER);

    return 0;
}