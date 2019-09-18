#include <stdio.h>
int main(void)
{
	int n1, n2;

	printf("请输入两个整数\n整数A：");
	scanf("%d", & n1);
	printf("整数B：");
	scanf("%d", & n2);

	printf("%d与%d的平均值为%f。\n", n1, n2, (n1 + n2)/2.0);
	
	return 0;
}
