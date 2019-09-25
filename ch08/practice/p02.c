#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y))


int main(void) {
    srand((unsigned)time(NULL));

    int a = rand() % 10;
    int b = rand() % 10;
    int c = rand() % 10;
    int d = rand() % 10;


    printf("a = %d，b = %d，c = %d，d = %d，max(max(max(a, b), c), d) = %d\n", a, b, c, d, MAX(MAX(MAX(a, b), c), d)
);

    return 0;
}