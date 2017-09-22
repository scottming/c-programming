#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum = 0;
    int cnt = 0;
    int retry;

    do {
        int t;

        printf("Please input a integer:\n>> ");
        scanf("%d", &t);

        sum += t;  // sum = sum + t;
        cnt++;  // cnt = cnt + 1;
        printf("Continue? <Yes...0/No...9>:");
        scanf("%d", &retry);

    } while (retry == 0);

    printf("sum is %d, average is %.2f.\n", sum, (double)sum / cnt);
    return 0;
}