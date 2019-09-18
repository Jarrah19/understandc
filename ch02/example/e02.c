#include <stdio.h>
int main (void)
{
	int n;

	puts("请输入一个整数");
	scanf("%d", &n);

	printf("该整数的最后一位数为%d。\n", n % 10);

	return 0;

}
