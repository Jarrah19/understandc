#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMBER 15

int search_idx(int v[], int n, int key) {
    int i, count = 0;

    for (i = 0; i < n; i++) {
        if (v[i] == key)
            count ++;
    }
    return count;
}

int main(void) {
    int i, key, x[NUMBER];
    srand((unsigned)time(NULL));


    for (i = 0; i < NUMBER; i++) {
        x [i] = rand() % 10;
        printf("%d ", x [i]);

    }
    putchar('\n');

    printf("请输入一个key :");
    scanf("%d", & key);
    printf("数组中一共有 %d 个key\n", search_idx (x, NUMBER, key));
    return 0;
}