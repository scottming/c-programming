#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, no;
    printf("Positive integer: \n>> ");
    scanf("%d", &no);

    for (i=1; i <= no; i++)
        putchar('*');
    putchar('\n');

    return 0;
}