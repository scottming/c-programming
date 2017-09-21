/*
    Switch case 探索
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int no;

    puts("please input a integer:");
    scanf("%d", &no);

    switch (no % 3) {
    case 0 : puts("This number can be divisbled by 3."); break;
    case 1 : puts("The remainder of this number is 1."); break;
    case 2 : puts("The remainder of this number is 2."); break;
    }

    return 0;
}