#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMBER 5

void intary_rcpy(int v[], int n) {
    int i, v2[n];

    for (i = 0; i < n; i++) {
        v2 [i] = v [n - 1 - i];
        printf("%d ", v2 [i]);
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
    intary_rcpy (x, NUMBER);
    putchar('\n');    

    return 0;
}