#include <stdio.h>
int main(void)
{
	int length, height, m, n;

	printf ("请输入第一个边长：");
	scanf ("%d", &m);

	printf ("请输入第二个边长：");
        scanf ("%d", &n);

	(m >= n) ? (length = m, height = n) : (length = n, height = m);

	for (m = 1; m <= height; m ++)
	{	for (n = 1; n <= length; n ++)
			printf ("* ");
	putchar ('\n');
	};
	
	return 0;
}
