#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    srand((unsigned)time(NULL));
    printf("欢迎来到占卜游戏，输入0退出，输入任意其他值开始游戏\n请输入: ");

    if (getchar() == '0') { return 0; }

    switch (rand() % 20) {
    case 0: printf("大吉\n"); break;

    case 1:
    case 2: printf("中吉\n"); break;

    case 3:
    case 4:
    case 5: printf("小吉\n"); break;

    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11: printf("吉\n"); break;

    case 12:
    case 13:
    case 14:
    case 15: printf("末吉\n"); break;

    case 16:
    case 17:
    case 18: printf("凶\n"); break;

    case 19: printf("大凶\n"); break;
    }

    return 0;

}