#include <stdio.h>
void put_stringr(const char s[]) {
    int i = 0;
    char t[128];

    while (s[i] != '\0') {
        i++;
    }

    for (int j = 0; j < i; j++) {

        t[j] = s[i - j - 1];
    }

    for (int j = 0; j < i; j++) {
        putchar(t[j]);
    }

    putchar('\n');
}



int main(void) {

    char s[128] = "0";

    puts("整个字符串呗");
    scanf("%s", s);

    puts("看我给你整一个镜像版的");
    put_stringr(s);

    return 0;
}