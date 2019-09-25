#include <stdio.h>

void null_string(char str[]) {

		str [0]= '\0';
	printf("给整空了%2s。\n", str);


}

int main(void) {
	char str[128];
	null_string(str);

}
