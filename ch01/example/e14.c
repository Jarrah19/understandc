#include <stdio.h>
int main(void)
{
	int n1, n2;

	puts("请输入第一个整数：");
	scanf("%d",&n1);
        puts("请输入第二个整数：");
        scanf("%d",&n2);

	printf("两个整数的和为%d。\n", n1 + n2);

	return 0;
}
