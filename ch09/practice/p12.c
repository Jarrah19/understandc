#include <stdio.h>

void rev_string(char s[][128], int n) {

    for (int i = 0; i < n; i++) {

        int len = 0;

        while (s[i][len] != '\0') {
            len++;
        }

        for (int j = 0; j < len / 2; j++) {

            s[i][j] += s[i][len - j - 1];
            s[i][len - j - 1] = s[i][j] - s[i][len - j - 1];
            s[i][j] -= s[i][len - j - 1];
        }

        for (int j = 0; j < len; j++) {
            putchar(s[i][j]);
        }

        putchar('\n');
    }
}


int main(void) {

    int amount;
    char s[128][128];

    puts("整多少字符串？");
    scanf("%d", &amount);

    puts("来啊，开始造啊\n");
    for (int i = 0; i < amount; i++) {
        printf("第 %d 个：", i + 1);
        scanf("%s", s[i]);
    }

    puts("你这玩意儿不行，我都给你镜像了");
    rev_string(s, amount);

    return 0;
}