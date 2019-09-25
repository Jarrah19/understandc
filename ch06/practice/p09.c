#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMBER 5

void rev_intary(int v[], int n) {
    int i;

    for (i = 0; i < n / 2; i++) {
        v [i] ^= v [n - 1 - i];
        v [n - 1 - i] ^= v [i];
        v [i] ^= v [n - 1 - i];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
}


int main(void) {
    int i, x[NUMBER];
    srand((unsigned)time(NULL));


    for (i = 0; i < NUMBER; i++) {
        x [i] = rand() % 10;
        printf("%d ", x [i]);

    }

    putchar('\n');
    rev_intary(x, NUMBER);
    putchar('\n');


    return 0;
}