#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    // int v[] = {1, 2, 3, 4, 5};
    // int v[] = {1, 3};  // 这里赋值后，会出现很多奇怪的数字，因为没指定数组的元素数量，所以默认为 2
    int v[5] = {1, 3};  // 1, 3, 0, 0, 0

    for (i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);

    return 0;
}