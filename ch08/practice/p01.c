#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int diff(x, y) {
    (x > y) ? (x -= y) : (x = y - x);
    return x;
}

int main(void) {
    srand((unsigned)time(NULL));

    int x = rand() % 10, y = rand() % 10;
    printf("x的值为 %d，y的值为 %d，差为 %d\n", x, y, diff(x, y));

    return 0;
}