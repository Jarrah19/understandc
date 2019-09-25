#include <stdio.h>
int main(void)
{
	int column, line, n;	

	puts("让我们来画一个金字塔。");
	printf("金字塔有几层：");
	scanf("%d", &n);

	for (line = 1; line <= n; line ++)
	
	{	for (column = 1; column <= n - line; column ++)
			putchar(' ');

		for (column = n; column > (n - 2 * line + 1); column --)
			putchar('*');

		for (column = 1; column <= n - line; column ++)
                        putchar(' ');
		
		putchar ('\n');
	}

	return 0;
}
