#include <stdio.h>

int str_char(const char s[], int c) {
	for (int i = 0; i < (sizeof(s)/sizeof(char)); i++){
		if (s[i] == c) {
			return i;
		}
	}
	return -1;
}

int main(void) {
	char s[128] = "0";

	scanf("%s", s);

	printf("%d\n", str_char(s, 'c'));
}