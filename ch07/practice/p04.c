#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

unsigned mask(int pos) {

    int s = 1;

    for (int i = 0; i < (pos - 1); i++) {
        s *= 2;
    }

    return s;
}

unsigned set(unsigned x, int pos) {

    return (x | mask(pos));
}

unsigned reset(unsigned x, int pos) {

    return (x & (~mask(pos)));
}

unsigned inverse(unsigned x, int pos) {

    return (x ^ mask(pos));
}

int main(void) {

    srand((unsigned)time(NULL));

    unsigned x = rand() % 65536;
    int pos = rand() % 16 + 1;

    printf("整数 %d 第 %d 位：\n设为1后的值为%d。\n设为0后的值为%d。\n取反后的值为%d。\n", x, pos, set(x, pos), reset(x, pos), inverse(x, pos));

}