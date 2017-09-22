#include <stdio.h>

int main(int argc, char const *argv[])
{
    int no;

    printf("Please input a positive integer:\n>> ");
    scanf("%d", &no);

    while (no >= 0) {
        printf("%d ", no);
        no--;
    }
    printf("\n");

    return 0;
}