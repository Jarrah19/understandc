#include <stdio.h>
#include <limits.h>
int main(void) {

	printf("这个编译器的char类型是:  ");

	if (CHAR_MIN == 0)
		printf("%s\n", "无符号的");
	else printf("%s\n", "有符号的");

	return 0;

}