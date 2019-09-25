#include <stdio.h>
int main(void)
{
	int i = 1, no;

	printf("请输入一个正整数：");
	scanf("%d", &no);
	
	if (no < 0)
		printf("输入的值小于0。");

	else {while (no >= i)
			{printf("%d ", i++);}
		printf("\n");
	}

	return 0;
}
