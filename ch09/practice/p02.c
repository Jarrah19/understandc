#include <stdio.h>

void vanish(char str[]) {

		str[0]= '\0';
	printf("字符串str为%2s。\n", str);


}

int main(void) {
	char str[] = "ABC";
	vanish(str);

}
