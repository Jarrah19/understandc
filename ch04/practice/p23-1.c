#include <stdio.h>
int main(void)
{
	int edge1, edge2, length;
	
	puts ("生成直角在左上方的等腰直角三角形。");
	printf ("短边：");
	scanf ("%d", &length);

	for (edge1 = length; edge1 >= 1; edge1 --)
	{	for (edge2 = length; edge2 >= (length - edge1 + 1); edge2 --)
			printf ("* ");
		
		putchar ('\n');
	};
	
	return 0;
}
