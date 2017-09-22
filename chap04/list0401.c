#include <stdio.h>

int main(int argc, char const *argv[])
{
    int retry;

    do {
        int no;
        
        puts("please input a integer:");
        scanf("%d", &no);

        if (no % 2)
            puts("This number is odd number.");
        else
            puts("This number is even number.");
        printf("Want retry? [Yes...0 / No...9]:\n");
        scanf("%d", &retry);
    }   while (retry == 0);  // 如果输入的不是数字会变成死循环

    return 0;
}