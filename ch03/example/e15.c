#include <stdio.h>
int main(void)
{
	int n1, n2;
	
	printf("请输入两个整数\n整数A：");
	scanf("%d", &n1);
	printf("整数B：");
	scanf("%d", &n2);

	if (n1>n2) printf("您输入的两个整数中，较大的为%d，较小的为%d。\n",n1,n2);
	else if (n1 == n2) puts("您输入的两个数相等。");
		else printf("您输入的两个整数中，较大的为%d，较小的为%d。\n",n2, n1);

	return 0;
}
