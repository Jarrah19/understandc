#include <stdio.h>

int str_chnum(const char s[], int c) {
	int cCounter = 0;
	for (int i = 0; i < (sizeof(s)/sizeof(char)); i++){
		if (s[i] == c) {
			cCounter ++;
		}
	}
	return cCounter;
}

int main(void) {
	char s[128] = "0";

	scanf("%s", s);

	printf("%d\n", str_chnum(s, 'c'));
}