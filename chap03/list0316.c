/*
	复合语句
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, max, min;

    puts("please input two int number:");
    printf("int1 >> "); scanf("%d", &n1);
    printf("int2 >> "); scanf("%d", &n2);

    if (n1 > n2) {
        max = n1;
        min = n2;
    } else {
        max = n2;
        min = n1;
    }

    printf("The max number is %d\n", max);
    printf("The min number is %d\n", min);

    return 0;
}