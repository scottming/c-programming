#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("Please input two int number:"); // 注意到了 puts 不需要 \n
    printf("int1 >> "); scanf("%d", &n1);
    printf("int2 >> "); scanf("%d", &n2);

    printf("n1 is %d\n", n1);
    printf("n2 is %d\n", n2);

    printf("n1 plus n2 is %d\n", n1 + n2);

    return 0;
}