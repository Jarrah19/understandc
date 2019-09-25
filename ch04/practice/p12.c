#include <stdio.h>
int main(void)
{
	int no, i=0;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	while (no > 0) (no /= 10, i++);

	printf("该正整数位数为：%d\n",i);

	return 0;
}
	
