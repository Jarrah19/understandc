#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER 9

int main(void) {
    int i, array [NUMBER];
    srand((unsigned)time(NULL));

    for (i = 0; i < NUMBER; i++) {
        array [i] = rand() % 101;
    }

    printf("数组 array 一共有 %d 个元素，该数组为 { ", NUMBER);

    for (i = 0; i < NUMBER - 1; i++) {
        printf("%d, ", array [i]);
    }

    printf("%d }。\n", array [NUMBER - 1]);

    return 0;
}