#include <stdio.h>
int main(void)
{
	int n, i = 1;
	
	printf("请输入一个大于2的整数：");
	scanf("%d", &n);

	if (n <= 2)
		printf("输入的整数并不大于2。");
	else while (n > 2 * i)
		printf("%d ", i *= 2 );

	printf("\n");

	return 0;
}
