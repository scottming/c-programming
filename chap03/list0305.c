/*
    非零的判断
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    puts("please input a int number:");
    scanf("%d", &num);

    if (num)
        puts("This number isn't 0.");
    else
        puts("This number is 0.");

    return 0;
}