#include <stdio.h>
int main(void)
{
	int i, no, count = 0;

	printf("整数值：");
	scanf("%d", &no);

	for (i = 1; no >= i; i++) {
		if (!(no % i)) {
			printf("%d\n", i);
			count ++;
		};
	};
	printf("约数有%d个。\n", count);

	return 0;
}
