/*
    显示两个正数中较大的数
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, max;

    puts("Please input two int numbers.");
    printf("int1 >> "); scanf("%d", &n1);
    printf("int2 >> "); scanf("%d", &n2);

    if (n1 > n2) max = n1; else max = n2;

    printf("The max number is %d\n", max);

    return 0;
}