#include <stdio.h>
#include <limits.h>

int main(void) {

	unsigned i;

	printf("请输入一个无符号整数：");
	scanf("%u", &i);

	printf("%u 加上 %u 的结果为：%u\n", i, UINT_MAX, i + UINT_MAX);

	return 0;
}