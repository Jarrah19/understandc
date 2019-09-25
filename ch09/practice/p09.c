#include <stdio.h>
void rev_string(char s[]) {
    int i = 0;

    while (s[i] != '\0') {
        i++;
    }

    for (int j = 0; j < i / 2; j++) {

        s[j] += s[i - j - 1];
        s[i - j - 1] = s[j] - s[i - j - 1];
        s[j] -= s[i - j - 1];
    }

    for (int j = 0; j < i; j++) {
        putchar(s[j]);
    }

    putchar('\n');
}



int main(void) {

    char s[128] = "0";

    puts("整个字符串呗");
    scanf("%s", s);

    puts("你这玩意儿不行，我给你镜像了");
    rev_string(s);

    return 0;
}