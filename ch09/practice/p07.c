#include <stdio.h>

void put_stringn(const char s[], int n) {
	for (int i = 0; i < n; i++){
		printf("%s", s);
		}
	putchar ('\n');
}

int main(void) {
	char s[128] = "0";
	int n;

	puts("整个字符串呗");
	scanf("%s", s);
	puts("梭哈！你就说整几倍吧");
	scanf("%d", &n);

	put_stringn(s, n);
}