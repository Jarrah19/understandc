#include <stdio.h>

int main(void) {
    int i, j = 6;
    int x[7], y[7];

    for (i = 0; i < 7; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < 7; i++) {
        y[j--] = x [i];
    }

    puts("倒序排列了。");

    for (i = 0; i < 7; i++) {
        printf("y[%d] = %d\n", i, y[i]);
    }

    return 0;
}