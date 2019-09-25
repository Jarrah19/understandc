#include <stdio.h>

int main(void) {

    char ch;
    int entersCounter = 0;

    while ((ch = getchar()) != EOF) {

        putchar(ch);

        if (ch == 10) { entersCounter ++; }
    }


    printf("整了 %u 行。\n", entersCounter + 1);

    return 0;
}