#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)

{
    int repeat = 9;
    srand((unsigned)time(NULL));
   
    do {
        int input;
        printf("\n请输入：1.剪刀 2.石头 3.布\n\n");
        scanf("%d", &input);

        if (input > 3 || input < 1) {
            puts("\n错误的输入\n");
        }

        while (getchar() != '\n');

        if (input == 1) {

            switch (rand() % 3) {
            case 0: puts("\n您输入的是：剪刀\n\n计算机的出拳是：布\n\n获胜方为：您\n\n"); break;

            case 1: puts("\n您输入的是：剪刀\n\n计算机的出拳是：石头\n\n获胜方为：计算机\n\n"); break;

            case 2: puts("\n您输入的是：剪刀\n\n计算机的出拳是：剪刀\n\n获胜方为：平局\n\n"); break;
            };
        } else if (input == 2) {
            switch (rand() % 3) {
            case 0: puts("\n您输入的是：石头\n\n计算机的出拳是：剪刀\n\n获胜方为：您\n\n"); break;

            case 1: puts("\n您输入的是：石头\n\n计算机的出拳是：布\n\n获胜方为：计算机\n\n"); break;

            case 2: puts("\n您输入的是：石头\n\n计算机的出拳是：石头\n\n获胜方为：平局\n\n"); break;
            };
        } else if (input == 3) {
            switch (rand() % 3) {
            case 0: puts("\n您输入的是：布\n\n计算机的出拳是：石头\n\n获胜方为：您\n\n"); break;

            case 1: puts("\n您输入的是：布\n\n计算机的出拳是：剪刀\n\n获胜方为：计算机\n\n"); break;

            case 2: puts("\n您输入的是：布\n\n计算机的出拳是：布\n\n获胜方为：平局\n\n"); break;
            };
        }

        printf("要重复一次吗？[是 …… 9][否 …… 0]：");
        scanf("%d", &repeat);
    } while (repeat == 9);

    return 0;
}
