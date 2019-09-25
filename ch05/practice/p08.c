#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER 30

int main(void) {
    int i, j, max = 0, marks [NUMBER], members [10] = {0};
    srand((unsigned)time(NULL));

    for (i = 0; i < NUMBER; i++) {
        marks [i] = rand() % 101;
    }

    for (i = 0; i < NUMBER; i ++) {
        printf("%d ", marks [i]);
    }

    putchar('\n');
    putchar('\n');

    for (i = 0; i < 10; i++) {
        for (j = 0; j < NUMBER; j++) {
            if (marks [j] >= 10 * i && marks [j] < (10 * i + 10))
                members [i] ++;

            if (max < members [i])
             max = members [i];
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < max - members [i]; j ++) {
            printf(" ");
        }

        for (j = 0; j < members [i]; j ++) {
            printf("*");
        }
        putchar('\n');
    }


    return 0;
}