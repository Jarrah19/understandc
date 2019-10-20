#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n, diffculty, randomn, input[128] = {0}, times, count = 0;

int powc(int a, int *b) {

    *b = 1;

    for (int i = 0; i < a; i++) {
        *b *= 10;
    }

    return *b;
}

void diff(int *a, int *b) {
    printf("请选择难度等级\n1. 0~9\n2. 0~99\n3. 0~999\n4. 0~9999\n");

    do {
        scanf("%d", a);

        while (getchar() != '\n');

        if (*a > 4 || *a < 1) { puts("错误的输入，请重新选择："); }
        else {
            *b = rand() % powc(*a, &n);

            // printf("%d\n", *b);
        }

    } while (*a > 4 || *a < 1);

}

int main(void) {

    srand((unsigned)time(NULL));


    do {

        diff(&diffculty, &randomn);
    
        puts("请输入想要猜的次数，0返回上⼀级");
        scanf("%d", &times);

        while (getchar() != '\n');

        if (times == 0) { continue; }

    } while (times == 0);

    puts("现在开始猜数！");

    for (int i = 0; i < times; i ++) {

        printf("剩余次数%2d: 请输入数字（0~%d）\n", times - i, n - 1);

        scanf("%d", &input[i]);

        while (getchar() != '\n');

        printf("输入的是%d，", input[i]);

        count ++;

        if (input[i] == randomn) { puts("恭喜你，猜中了!"); break;}

        else {
            printf("没有猜中，");
        }

        (input[i] > randomn) ? puts("大了") : puts("小了");

    }

    puts("猜题记录");

    for (int i = 0; i < count; i++) {

        printf("%-2d %4d", i + 1, input[i]);

        (input[i] == randomn) ? puts("   正确") : printf("  %5d\n", input[i] - randomn);
   
    }

    return 0;

}