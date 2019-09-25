#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>

unsigned mask(int pos, int n) {
    int start = 1, end = 1;

    for (int i = 0; i < pos - 1; i++) {
        start *= 2;
    }

    for (int i = 0; i < (pos + n - 1); i++) {
        end *= 2;
    }

    return (end - start);
}

unsigned set_n(unsigned x, int pos, int n) {

    return (x | mask(pos, n));
}

unsigned reset_n(unsigned x, int pos, int n) {

    return (x & (~mask(pos, n)));
}

unsigned inverse_n(unsigned x, int pos, int n) {

    return (x ^ mask(pos, n));
}

int main(void) {

    srand((unsigned)time(NULL));

    unsigned x = rand() % 65536;
    int pos = rand() % 8 + 1;
    int n = rand() % 8 + 1;

    printf("整数 %d 第 %d 位到第 %d 位：\n设为1后的值为%d。\n设为0后的值为%d。\n取反后的值为%d。\n", x, pos, pos + n - 1, set_n(x, pos, n), reset_n(x, pos, n), inverse_n(x,
            pos, n));

}
