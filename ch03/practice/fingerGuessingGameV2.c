#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int repeat = 9;

    do {
        int input, computer = (rand() % 3);
        printf("\n请输入：1.剪刀 2.石头 3.布\n\n");
        scanf("%d", &input);

        while (getchar() != '\n');

        switch (input) {
        case 1: puts("\n您输入的是：剪刀\n"); break;

        case 2: puts("\n您输入的是：石头\n"); break;

        case 3: puts("\n您输入的是：布\n"); break;

        default: puts("\n错误的输入\n"); continue;
        };

        switch (computer + 1) {
        case 1: puts("计算机的出拳是：剪刀\n"); break;

        case 2: puts("计算机的出拳是：石头\n"); break;

        case 3: puts("计算机的出拳是：布\n"); break;
        };

        if (input == computer + 1) { printf("获胜方为：平局\n"); }
        else if (input == computer || input == computer + 3) { printf("获胜方为：计算机\n"); }
        else { printf("获胜方是：您\n"); }

        printf("\n要重复一次吗？[是 …… 9][否 …… 0]：");

        scanf("%d", &repeat);

    } while (repeat == 9);

    return 0;
}
