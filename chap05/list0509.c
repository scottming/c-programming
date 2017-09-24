#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    int tensu[5];
    int sum = 0;

    printf("请输入 5 名学生的分数。\n");
    for (i = 0; i < 5; i ++) {
        printf("%2d 号：", i + 1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }


    printf("Count: %5d\n", sum);
    printf("Average: %5.1f\n", (double)sum / 5);

    return 0;
}