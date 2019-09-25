#include <stdio.h>
int main(void)
{
	int i=0, no;
	
	printf("请输入一个正整数：");
	scanf("%d", &no);

	while(no > i++)
		{ if (i % 2) 
			putchar('+');
		else
			putchar('-');
		
		if (no == i) putchar('\n');
		}

	return 0;
}
