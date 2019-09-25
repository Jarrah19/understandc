#include <stdio.h>

void alert (int n) {
	int i;
	for (i = 0; i < n; i++)
	printf("\a");
}


int main(void)
{
    int x;

    puts("请输入一个整数:");
    scanf("%d", &x);
    alert (x);
    return 0;
}