#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER 5
/*冒泡排序*/
void bsort(int a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    srand((unsigned)time(NULL));
    int i;
    int height[NUMBER];

    printf("请输入%d人的身高。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        height[i] = rand() % 40 + 150;
    }

    bsort(height, NUMBER);

    puts("按升序排列。");

    for (i = 0; i < NUMBER; i++)
        printf("%2d号：%d\n", i + 1, height[i]);
    return 0;
}