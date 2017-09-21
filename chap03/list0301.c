#include <stdio.h>

int main(int argc, char const *argv[])
{
    int no;
    puts("please input a int number:");
    scanf("%d", &no);

    if (no % 5)
        // printf("%d\n", no%5);  // 不能像 python 一样，一个条件语句下好多都能执行，这里一不会出错。
        puts("The number that you input can not be divisible by 5.");
    else
        puts("The number that you input can be divisible by 5.");

    return 0;
}