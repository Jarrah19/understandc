#include <stdio.h>
int main(void)
{
	int no;

	do {
		printf("请输入一个正整数：");
		scanf("%d", &no);
		if (no <= 0)
			printf("输入的数不为正整数！");
	} while (no <= 0);

	while (no -- > 0) {
		putchar('*');
		if (no == 0)
			putchar('\n');
		}
	return 0;
}
