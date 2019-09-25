#include <stdio.h>

int summary (int x) {
	int i, j;
	for (i = 1; i <= x; i++)
		j += i;
	return j;
}


int main(void)
{
    int x;

    puts("请输入一个整数:");
    scanf("%d", &x);

    printf("从 1 到 %d 所有整数和是%d\n", x, summary (x));

    return 0;
}