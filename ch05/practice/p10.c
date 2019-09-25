#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    int i, j, k, x [4] [3], y [3] [4], z [4] [4] = {0};
    srand((unsigned)time(NULL));

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {

            x [i] [j] = rand() % 10;
            printf("%2d", x[i] [j]);
        }

        printf("\n");
    }

    printf("\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {

            y [i] [j] = rand() % 10;
            printf("%2d", y[i] [j]);
        }

        printf("\n");
    }

    printf("\n");

    for (i = 0; i < 4; i++) {

        for (j = 0; j < 4; j++) {
            for (k = 0; k < 3; k++) {
                z [i] [j] = z [i] [j] + x [i] [k] * y [k] [j];
            }

            printf("%3d ", z[i] [j]);
        }

        printf("\n");

    }

    return 0;
}