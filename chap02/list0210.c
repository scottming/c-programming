#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    puts("Please input two int number:");
    printf("int a >> "); scanf("%d", &a);
    printf("int b >> "); scanf("%d", &b);

    printf("average is %f\n", (double) (a + b) / 2);

    return 0;
}