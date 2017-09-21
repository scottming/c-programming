/*
    判断输入整数的符号
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    puts("please input a int number:");
    scanf("%d", &num);

    if (num == 0)  // 注意了，表达式要在括号内
        puts("This number is 0.");
    else if (num > 0)
        puts("This number is a positive number.");
    else
        puts("This number is a nagetive number.");

    return 0;
}