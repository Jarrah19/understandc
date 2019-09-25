#include <stdio.h>
int main(void) {
    int amout = 0, sum = 0, repeat;

    do {
        int n;
        printf("请输入一个整数：");
        scanf("%d", &n);

        sum += n;
        amout ++;

        printf("是否继续？[是 …… 9][否 …… 0]：");
        scanf("%d", &repeat);

    } while (repeat == 9);

    printf("和为%d，平均值为%.2f。\n", sum, (double)sum / amout);

    return 0;
}
