#include <stdio.h>

int sqr(int x)
{
    return x * x;
}

int diff(int a, int b)
{
    return (a > b ? a - b : b - a);
}

int pow4 (int x) {
	return sqr(x) * sqr(x);
}

int main(void)
{
    int x, y;

    puts("请输入两个整数。");
    printf("整数x:"); scanf("%d", &x);
    printf("整数y:"); scanf("%d", &y);

    printf("x和y的平方差是%d。\n", diff(sqr(x), sqr(y)));

    printf("x的4次方是%d\n", pow4(x));

    return 0;
}