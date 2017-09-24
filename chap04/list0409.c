#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    int sum = 0;
    int num, tmp;

    printf("要输入多少个整数：");
    scanf("%d", &num);

    while (i < num) {
        // ++i 和 i++ 的区别是一个从 1 开始(递增后的值)，一个是从 0 开始(递增前的值)
        printf("No.%d:", ++i);  // No.1，如果是 i++ 则是 No.0
        scanf("%d", &tmp);
        sum += tmp;
    }

    printf("Count is %d\n", sum);
    printf("Average is %.2f\n", (double)sum / num);

    return 0;
}