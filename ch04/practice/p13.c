#include <stdio.h>
int main(void)
{
	int i, no, sum = 0;
	printf("一个输入一个正整数：");
	scanf("%d", &no);

	for (i = 0 ; no >= i; i++)
		(sum += i);

	printf("从 1 到 %d 的和为 %d\n", no, sum);

	return 0;
} 
