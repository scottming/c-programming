#include <stdio.h>

int main(int argc, char const *argv[])
{
    int no;

    printf("Integer:\n>> ");
    scanf("%d", &no);

    while (no-- > 0)
        putchar('*');
    putchar('\n');

    return 0;
}