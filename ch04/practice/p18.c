#include <stdio.h>
int main(void)
{
	int i, no;

	printf("显示多少个*:");
	scanf("%d", &no);

	for (i = 1; no >= i; i++) {
		putchar ('*');
		
		if (i % 5 == 0)
			putchar ('\n');
	}

	putchar ('\n');

	return 0;
}
