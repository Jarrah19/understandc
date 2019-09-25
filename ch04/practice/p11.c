#include <stdio.h>
int main(void)
{
	int pno, no;
	
	printf("请输入一个正整数：");
	scanf("%d", &pno);
	
	no = pno;

	printf("您输入的整数为%d，该整数的逆向显示的结果是", pno);
	
	while (no > 0) {
		printf("%d", no % 10);
		no /= 10;
	}

	putchar('\n');

	return 0;
}
