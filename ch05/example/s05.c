#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMBER 30
int main(void) {
    int i, amount = 0, array [NUMBER];
    srand((unsigned)time(NULL));


    for (i = 0; i < NUMBER; i++) {
        array [i] = (rand() % 81 + 20);

        if (array[i] >= 60) { amount++; }

        printf("array[%d] = %d\n", i, array[i]);

    }

    printf("及格的人数为%d\n", amount);
}
