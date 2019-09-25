#include <stdio.h>
int main(void)
{
	int i, n;

	printf("n的值是：");
	scanf("%d", &n);

	for ( i = 1; n >= i; i++)
		printf("%d的二次方是%d\n", i, i * i);

	return 0;
}
