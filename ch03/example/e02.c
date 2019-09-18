#include <stdio.h>
int main(void)
{
	int n;

	printf("请输入一个整数：");
	scanf("%d", &n);

	if (n % 2) puts("该整数为奇数");
	else puts("该整数为偶数");

	return 0;
}
