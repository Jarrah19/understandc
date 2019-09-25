#include <stdio.h>

void del_digit(char s[]) {
    int wholeSize = 0, digitSize = 0;

    while (s[wholeSize] != '\0') {
        wholeSize++;
    }

    for (int i = 0; i < wholeSize; i++) {
        if (s[i] <= 57 && s[i] >= 48) {
            for (int j = i; j < wholeSize; j++) {
                s[j] = s[j + 1];
            }
        }
    }
    for (int i = 0; i < wholeSize; i++) {
    	putchar(s[i]);
    }
    putchar('\n');
}

int main(void) {

    char s[128] = "0";

    puts("整个字符串呗");
    scanf("%s", s);
    puts("你这不行，整地还有数字，看我把数字给你削了！");
    del_digit(s);

    return 0;
}