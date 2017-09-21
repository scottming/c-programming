#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    double x;

    n = 9.99;
    x = 2;

    printf("n is %d\n", n);
    printf("x is %f\n", x);  // c 里面这些转义符号太严格了，一旦错了，就会返回很奇怪的值

    return 0;
}