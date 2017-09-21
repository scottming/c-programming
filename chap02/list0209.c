#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    double x;

    n = 9.9;
    x = 2.01;

    printf("n is %d\n", n);
    printf("x is %f\n", x);  // c 里面这些转义符号太严格了，一旦错了，就会返回很奇怪的值
    printf("n/x = %f\n", n/x);  // 只有这条除出来的数才是正常的
    printf("n/2.0 is %f\n", n/2.0);  
    printf("x/2.0 is %f", n/2);  

    return 0;
}