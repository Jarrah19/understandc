#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mat_mul(const int x[4][3], const int y[3][4], int z[4][4]) {
    int i, j, k;

    for (i = 0; i < 4; i ++) {
        for (j = 0; j < 4; j ++) {
            for (k = 0; k < 3; k++) {
                z[i][j] += x[i][k] * y[k][j];
            }
        printf("%d ", z[i][j]);

        }

        putchar('\n');
    }
}

int main(void) {
    int i, j;
    int a[4][3], b[3][4], c[4][4] = {0};
    srand((unsigned)time(NULL));

    printf("二维数组 a :\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            a[i][j] = rand() % 10;
            printf("%d ", a[i][j]);
        }

        putchar('\n');
    }

    printf("二维数组 b :\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            b[i][j] = rand() % 10;
            printf("%d ", b[i][j]);
        }

        putchar('\n');
    }

    printf("a 与 b 的乘积 c ：\n");

    mat_mul(a, b, c);

    return 0;
}