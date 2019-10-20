#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void adjust_point(int *n) {
    if (*n < 0) { *n = 0; }

    if (*n > 100) { *n = 100; }

    printf("%d\n", *n);

}

int main(void) {

    srand((unsigned)time(NULL));
    int n = (rand() % 301) - 100;

    printf("%d\n", n);

    adjust_point(&n);

    return 0;
}