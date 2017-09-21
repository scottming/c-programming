/*
	用条件运算符来判断两个输入数的较大的那个
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, max;

    puts("please input two int number:");
    printf("int1 >> "); scanf("%d", &n1);
    printf("int2 >> "); scanf("%d", &n2);

    max = n1 > n2 ? n1 : n2;
    
    printf("The max number is %d\n", max);

    return 0;
}